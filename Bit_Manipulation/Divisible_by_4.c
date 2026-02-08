#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long n;
    scanf("%lld", &n);
    if (n>=-2147483648 && n<=2147483647)
        if ((n&3)==0) printf("Divisible");
        else printf("Not Divisible");
    else printf("Out of Range");
    return 0;
}
