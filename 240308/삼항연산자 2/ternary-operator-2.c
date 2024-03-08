#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    char result = (a==1)?'t':'f';
    printf("%c",result);
    return 0;
}