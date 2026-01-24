#include <stdio.h>
int main() 
{
    int angle=0;
    scanf("%d",&angle);
    if (angle%360==0)
        if(angle==0)printf("Acute Angle");
        else printf("Full Rotation");
    else
    {angle%=360;
    if(angle>=180)
    {
        if(angle==180)
            printf("Straight Angle");
        else
            printf("Reflex Angle");
    }
    else if(angle>0){
        if(angle<90)
            printf("Acute Angle");
        else if(angle==90)
            printf("Right Angle");
        else
            printf("Obtuse Angle");}
    }       
    return 0;
}

