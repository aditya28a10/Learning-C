#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diff(int n){
    int a, b, c, sum=0, prod=1;
    while (n!=0){
        sum+=n%10;
        prod*=n%10;
        n/=10;
    }
    return (prod-sum);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    printf("%d", diff(n));
    return 0;
}
