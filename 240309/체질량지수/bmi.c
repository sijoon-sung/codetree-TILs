#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    double result;
    scanf("%d %d",&a,&b);
    result = b*pow(100,2) / pow(a,2);
    if (result>25) {
        printf("%.0lf\nObesity",floor(result));
    }
    else {
        printf("%.0f",floor(result));
    }
    return 0;
}