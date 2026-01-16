#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned char age= '0';
    scanf("%hhu",&age);
    if(age>=18)
        printf("Eligible");
    else
        printf("Not Eligible");
}

