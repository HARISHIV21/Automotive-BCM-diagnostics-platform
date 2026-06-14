
#include <stdio.h>
#include <time.h>

int dtc_count = 0;

void DTC_Runtime(float voltage)
{
    time_t now = time(NULL);

    if(voltage < 11.2)
    {
        dtc_count++;

        printf("[WARN][DTC_MANAGER][%ld]\n",now);
        printf("DTC=B1001-12\n");
        printf("Description=Battery voltage below threshold\n");
        printf("Voltage=%.2fV\n",voltage);
    }

    if(voltage < 10.2)
    {
        dtc_count++;

        printf("[CRITICAL][DTC_MANAGER][%ld]\n",now);
        printf("DTC=B2001-31\n");
        printf("Description=Critical battery instability\n");
        printf("Voltage=%.2fV\n",voltage);
    }
}
