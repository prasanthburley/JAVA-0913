#include<stdio.h>
int main() {
    int a = 0, b = 1, n, c, sum = 0;
    printf("Enter a n: ");
    scanf("%d", &n);
    printf("The fibonacci series is: \t");
    for (int x = 0; x <= 2 * n; x++) {
        printf("%d\t", a);
        if (x % 2 == 0)
            sum += a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nTheir sum is = %d", sum);
    return 0;
}
