#include <stdio.h>

int main() 
{
    int n,c;c=0;
    scanf("%d",&n);
    for(int i=0;i<32;i++)
    {
        if(n&1<<i)
        c++;
    }
    printf("%d",c);
    return 0;
}
