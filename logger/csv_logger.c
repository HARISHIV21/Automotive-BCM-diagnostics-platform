
#include <stdio.h>
#include <time.h>

void CSV_Log(int tick,float voltage)
{
    FILE *fp;

    fp = fopen("bcm_runtime.csv",
               tick == 0 ? "w" : "a");

    if(fp == NULL)
        return;

    if(tick == 0)
    {
        fprintf(fp,
        "Timestamp,Tick,BatteryVoltage\n");
    }

    fprintf(fp,
            "%ld,%d,%.2f\n",
            time(NULL),
            tick,
            voltage);

    fclose(fp);
}
