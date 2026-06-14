
#include <stdio.h>

extern int dtc_count;

float min_voltage = 12.6;
float max_voltage = 0.0;
float avg_voltage = 0.0;
int samples = 0;

void Analytics_Update(float voltage)
{
    if(voltage < min_voltage)
        min_voltage = voltage;

    if(voltage > max_voltage)
        max_voltage = voltage;

    avg_voltage += voltage;
    samples++;
}

void Analytics_Report(void)
{
    avg_voltage /= samples;

    printf("\n====================================================\n");
    printf(" ECU HEALTH ANALYTICS REPORT\n");
    printf("====================================================\n");

    printf("Minimum Voltage       : %.2fV\n",min_voltage);
    printf("Maximum Voltage       : %.2fV\n",max_voltage);
    printf("Average Voltage       : %.2fV\n",avg_voltage);
    printf("Total DTC Events      : %d\n",dtc_count);

    if(avg_voltage > 11.5)
    {
        printf("Battery Stability     : STABLE\n");
    }
    else if(avg_voltage > 10.5)
    {
        printf("Battery Stability     : MODERATE\n");
    }
    else
    {
        printf("Battery Stability     : CRITICAL\n");
    }

    printf("\nRoot Cause Assessment:\n");

    if(dtc_count > 5)
    {
        printf("Electrical instability detected during runtime.\n");
    }
    else
    {
        printf("No severe electrical anomalies detected.\n");
    }

    printf("\nRecommended Action:\n");

    if(avg_voltage < 10.5)
    {
        printf("Inspect charging subsystem immediately.\n");
    }
    else
    {
        printf("Continue runtime monitoring.\n");
    }

    printf("====================================================\n");
}
