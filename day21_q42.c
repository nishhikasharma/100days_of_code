#include <stdio.h>
int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num != 0)
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    return 0;
}
