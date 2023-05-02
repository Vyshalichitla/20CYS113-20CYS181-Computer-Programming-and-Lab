#include <stdio.h>
int main(){
    //r1-initial reading
    //r2-final reading 
    double r1,r2,distance,reward;
    printf("Enter initial reading of odometer:\n");
    scanf("%lf",&r1);
    printf("Enter final reading of odometer:\n");
    scanf("%lf",&r2);
    distance=(r2-r1);
    
    reward=((distance)*10);
    printf("The reward for your distance travelled per hr %f",reward);
 return 0;
}

