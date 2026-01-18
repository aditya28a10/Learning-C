#include <stdio.h>
int ithbit(int num,int i)
{
    int bit=num&(1<<i);
    if(bit!=0)
        return 1;
    return 0;
}
int main() {
    int num,i;
    scanf("%d%d",&num,&i);
    printf("%d",ithbit(num,i));
    
    return 0;
}
