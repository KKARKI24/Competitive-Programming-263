#include <stdio.h>

int main() {
    int n, i, max, min, maxHour, above = 0;
    float sum = 0, avg, a[100];

    printf("Enter number of hours: ");
    scanf("%d", &n);

    printf("Enter patient count for each hour:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    max = min = a[0];
    maxHour = 1;

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            maxHour = i + 1;
        }

        if(a[i] < min)
            min = a[i];
    }

    avg = sum / n;

    for(i = 0; i < n; i++) {
        if(a[i] > avg)
            above++;
    }

    printf("Maximum patients = %d\n", max);
    printf("Hour = %d\n", maxHour);
    printf("Minimum patients = %d\n", min);
    printf("Peak hour = %d\n", maxHour);
    printf("Average = %.2f\n", avg);
    printf("Hours above average = %d\n", above);

    return 0;
}