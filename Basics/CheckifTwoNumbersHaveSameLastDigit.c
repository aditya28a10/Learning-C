#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a=0,b=0;
    scanf("%d%d",&a,&b);
    if((a-b+1)&1)printf("YES");
    else printf("NO");
}

