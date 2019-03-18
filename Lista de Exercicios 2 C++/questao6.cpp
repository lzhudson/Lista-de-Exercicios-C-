#include <stdio.h>
int main(){
    const float a = 14.2;
    const float b = 5.1;
    printf("%.1f + %.1f = %.1f\n", a, b, a + b);
    printf("%.1f - %.1f = %.1f\n", a, b, a - b);
    printf("%.1f * %.1f = %.2f\n", a, b, a * b);
    printf("%.1f / %.1f = %.4f\n", a, b, a / b);
    printf("%.1f / %.1f = %d\n", a, b, (int)a%(int)b);
}
