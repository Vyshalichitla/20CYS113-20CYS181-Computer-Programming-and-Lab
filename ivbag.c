#include <stdio.h>
int main(){
    int volume;
    double rate,time;
    printf("Enter the volume in ml:\n");
    scanf("%d",&volume);
    printf("Enter the time to be infused");
    scanf("%lf",&time);
    time=((time)/60);
    printf("The required time in hrs %f\n",time);
    rate=((volume)/(time));
    printf("The infused rate of vibag is %f\n",rate);
 return 0;
}
    
