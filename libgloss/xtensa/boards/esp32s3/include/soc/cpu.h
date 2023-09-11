#ifndef SOC_CPU_H
#define SOC_CPU_H

/*
 * ESP32S3 starts with CPU frequency 40MHz
 * Let's do not reconfigure it to simplify libgloss
 */
#define CPU_FREQUENCY_MHZ 40
#define CPU_FREQUENCY_HZ (CPU_FREQUENCY_MHZ * 1000000)

#endif // SOC_CPU_H
