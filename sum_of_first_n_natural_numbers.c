#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", n); 

    for (int i = 1; i <= n; i++) {
        sum = sum + i
    }

    printf("Sum of first %d natural numbers is: %d", n, sum); 
    return;  
}