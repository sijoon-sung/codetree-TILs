#include <stdio.h>

int main() {
    char c;
    double a, b;
    scanf(" %c %lf %lf", &c, &a, &b); // %c를 사용하여 문자 한 개를 입력받습니다.
    printf("%c\n", c); // %c를 사용하여 문자를 출력합니다.
    printf("%.2f\n%.2f", a, b);
    return 0;
}