
#include <stdio.h>
#include <time.h>

void CAN_Runtime(int tick)
{
    time_t now = time(NULL);

    printf("[INFO][CAN][%ld] RX ID=0x%03X DLC=8 DATA=[%02X %02X %02X %02X]\n",
           now,
           0x200 + (tick % 5),
           tick,
           tick + 1,
           tick + 2,
           tick + 3);
}
