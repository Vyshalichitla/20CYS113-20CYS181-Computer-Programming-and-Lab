#include <stdio.h>
int main() {
    int n;
    printf("Enter the number to check whether odd or even:");
    scanf("%d",&n);
    //if the number is even then output is 1
    //if the number is odd then  output is 0

    printf("%d", n%2 ==0);
    return 0;
}