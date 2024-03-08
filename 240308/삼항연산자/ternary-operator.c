#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    char* result = (a == 100) ? "pass" : "failure";
    printf("%s",result);
    return 0;
}