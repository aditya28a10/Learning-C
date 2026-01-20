#include <stdio.h>

int main() 
{
    int num,i;
    scanf("%d%d",&num,&i);
    printf("%d",num&(~(1<<i)));
    return 0;
}
