#include<stdio.h>
struct complex_numbers {
        double R[3];
        double I[3];

        }cno;
int main(){
        int x;
        for(x=1;x<=1;x++);{

        scanf("%f",&cno.R[x]);
        scanf("%f",&cno.I[x]);
        
        


        cno.R[2]=(cno.R[0]*cno.R[1]-cno.I[0]*cno.I[1]);

         cno.I[2]=(cno.R[0]*cno.I[1]+cno.I[0]*cno.R[1]);
printf("Multiplication of the complex numbers is %f + i(%f)",cno.R[2],cno.I[2]);

        }
return 0;
}
