
#include <stdio.h>

extern float battery_voltage;

void Runtime_Status(int tick)
{
    const char *headlight =
        (tick % 3 == 0) ? "ACTIVE" : "OFF";

    const char *wiper =
        (tick % 4 == 0) ? "LOW_SPEED" : "OFF";

    const char *doorlock =
        (tick % 5 == 0) ? "LOCKED" : "UNLOCKED";

    printf("[INFO][BCM_STATUS]\n");

    printf("Tick                 : %d\n",tick);
    printf("Headlamp State       : %s\n",headlight);
    printf("Wiper State          : %s\n",wiper);
    printf("Door Lock State      : %s\n",doorlock);
    printf("Battery Voltage      : %.2fV\n",battery_voltage);
}
