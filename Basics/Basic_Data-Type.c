#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%c\n",c);
    printf("%.03f\n",d);
    printf("%.09f\n",e);
    return 0;
}

