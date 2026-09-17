#include <stdio.h>

int main() {
    int n, i, count = 0, pos = 0;
    float a[100], threshold, min, sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance percentages:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    printf("Enter threshold: ");
    scanf("%f", &threshold);

    min = a[0];

    for(i = 0; i < n; i++) {
        if(a[i] < threshold)
            count++;

        if(a[i] < min) {
            min = a[i];
            pos = i;
        }
    }

    avg = sum / n;

    printf("Below threshold = %d\n", count);
    printf("Lowest attendance = %.2f\n", min);
    printf("Position = %d\n", pos + 1);
    printf("Average attendance = %.2f\n", avg);

    return 0;
}