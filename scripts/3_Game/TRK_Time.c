class TRK_Time
{
    // CONSTANTS
    const int MIN_IN_SEC = 60;
    const int HOUR_IN_SEC = 60 * 60;
    const int DAY_IN_SEC = 24 * 60 * 60;
    // ATTRIBUTES
    int year, month, day, hour, minute, second;

    // Constructor
    void TRK_Time(int yr, int mo, int dy, int hr, int mi, int se)
    {
        year = yr;
        month = mo;
        day = dy;
        hour = hr;
        minute = mi;
        second = se;
    }

    // Destructor
    void ~TRK_Time() {}

    //As per https://stackoverflow.com/a/3309340
    bool IsLeapYear()
    {
        if ((year % 4) != 0) return false;
        if ((year % 100) == 0) return ((year % 400) == 0);
        return true;
    }

    // Returns int timestamp in seconds (since epoch, though it might not 100% correspond an UNIX timestamp)
    // As per https://stackoverflow.com/a/3309340 with modifications by Kerkkoh to return something closer to UNIX timestamp
    int GetTimestamp()
    {
        int daysToMonth[13];
        if (IsLeapYear())
            daysToMonth = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };
        else
            daysToMonth = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };

        int previousYear = year - 1970 - 1;
        int daysInPreviousYears = ((((previousYear * 365) + (previousYear / 4)) - (previousYear / 100)) + (previousYear / 400));
        int totalDays = ((daysInPreviousYears + daysToMonth[month - 1]) + day) - 1;

        return (totalDays * DAY_IN_SEC + hour * HOUR_IN_SEC + minute * MIN_IN_SEC + second);
    }

    // Returns simple ISO_8601 timestamp, see: https://en.wikipedia.org/wiki/ISO_8601
    string GetISOTimestamp()
    {
        return string.Format("%1-%2-%3T%4:%5:%6", year.ToStringLen(4), month.ToStringLen(2), day.ToStringLen(2), hour.ToStringLen(2), minute.ToStringLen(2), second.ToStringLen(2));
    }

    int GetDiffInSeconds(TRK_Time another)
    {
        return Math.AbsInt(this.GetTimestamp() - another.GetTimestamp());
    }

    // STATIC FUNCTIONS

    // Gets current time instance
    static TRK_Time GetTime()
    {
        int yr, mon, dy, hr, min, sec;

        GetYearMonthDayUTC(yr, mon, dy);
        GetHourMinuteSecondUTC(hr, min, sec);

        return (new TRK_Time(yr, mon, dy, hr, min, sec));
    }

    // Parses ISO_8601 timestamp into Time instance
    static TRK_Time ParseISOTimestamp(string timestamp)
    {
        array<string> dateAndTime = new array<string>;
        array<string> date = new array<string>;
        array<string> time = new array<string>;

        timestamp.Split("T", dateAndTime);
        dateAndTime.Get(0).Split("-", date); //YEAR,MONTH,DAY
        dateAndTime.Get(1).Split(":", time); //HOUR,MIN,SEC

        return new TRK_Time(date.Get(0).ToInt(), date.Get(1).ToInt(), date.Get(2).ToInt(), time.Get(0).ToInt(), time.Get(1).ToInt(), time.Get(2).ToInt());
    }
}
