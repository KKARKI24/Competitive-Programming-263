#include <stdio.h>

int main() {
    int n, i, j;
    float price[100], temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &price[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(price[j] > price[j + 1]) {
                temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
            }
        }
    }

    printf("Prices in ascending order:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", price[i]);

    return 0;
}