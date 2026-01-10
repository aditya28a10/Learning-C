#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int toSeconds(int a,int b,int c)
{
    int tsec=a*3600+b*60+c;
    return tsec;
}
int main() {

    int h,m,s;
    scanf(" %d %d %d",&h,&m,&s);
    // int res=toSeconds(h,m,s);to access value once, no need to hold 4 bytes
    printf("Total seconds: %d",toSeconds(h,m,s));
    return 0;
}
