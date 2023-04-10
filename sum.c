#include <stdio.h>
int main() {
    int n, i, S=0;
    

    printf("Enter a integer: ");
    scanf("%d", &n);
      
  for (i = 1; i <= n; i++) {

    S += i;
    }
printf("Sum = %d", S);
return 0;
}
