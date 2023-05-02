#include <stdio.h>
#include<math.h>
int main(){
    int time;
    double temperature;
    printf("Enter the value of time in hrs:");
    scanf("%d",&time);
    
    temperature= (((4*pow(time,2))/(time+2))-20);
    printf("The value of temperature is %f",temperature);

 return 0;
}
  
