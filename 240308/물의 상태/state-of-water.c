#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a >= 100) { 
        printf("%s","vapor");
    }
    else if (a < 0) {
        printf("%s","ice");
    }
    else {
        printf("%s","water");
    }
    return 0;
}