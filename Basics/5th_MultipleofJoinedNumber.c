#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(char a,char b,char c,char d)
{
    return 5*(a*1000+b*100+c*10+d);
}
int main() {
    char n1,n2,n3,n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    printf("The number is: %d",buildNumber(n1,n2,n3,n4));
    return 0;
}

