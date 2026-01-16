#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float finalpr(float price,float discp)
{
    float res=price-(price*discp)/100;
    return res;
}
int main() {

    float discp,price;
    scanf("%f%f",&price,&discp);
    printf("The final price is: %f",finalpr(price,discp));
    return 0;
}

