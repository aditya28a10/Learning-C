#include <stdio.h>

int main() 
{
    int n ;int i;scanf("%d",&n);
    for( i=1;i<n;i+=2)
        printf("%d -%d ",i,i+1);
    if(n%2)
    printf("%d",i);
    return 0;
}
