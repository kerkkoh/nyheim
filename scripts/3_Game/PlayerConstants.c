/**
    This disables health loss from low heat comfort.
    Can be disabled by commenting out the lines below.
*/
modded class PlayerConstants
{
    static const float HEALTH_LOSS_HC_PLUS_LOW = 0.0;
    static const float HEALTH_LOSS_HC_PLUS_HIGH = 0.0;

    static const float HEALTH_LOSS_HC_MINUS_LOW = 0.0;
    static const float HEALTH_LOSS_HC_MINUS_HIGH = 0.0;

    // WintChern
    static const float HYPOTHERMIA_HEALTH_DECREMENT_PER_SEC = 0.0;
    static const float HYPERTHERMIA_HEALTH_DECREMENT_PER_SEC = 0.0;
}
