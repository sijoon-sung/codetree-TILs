#include <stdio.h>
#include <math.h>

int main() {
    int a,result;
    scanf("%d",&a);
    result = pow(a,2);
    if (a<5) {
        printf("%d\ntiny",result);
    }
    else {
        printf("%d",result);
    }
    return 0;
}