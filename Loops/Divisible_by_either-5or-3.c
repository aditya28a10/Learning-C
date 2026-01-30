#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a;scanf("%d",&a);
    for(int i=3;i<=a;i++){
        if((i%3==0)^(i%5==0))
         printf("%d ",i);
    }
       
    return 0;
}

