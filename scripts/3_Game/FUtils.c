/*
* Functional (kinda) programming utils
*/

class FUtils<Class T>
{
    static T Conditional(bool condition, T optionTrue, T optionFalse)
    {
        if (condition)
            return optionTrue;
        else
            return optionFalse;
    }
}
