#include <stdio.h>
//function declration
int sum_natural_numbers(int x) {
  int sum=0;
  
  for(int i = 0; i <= x; i++) {
    sum+=i;
  }
  printf("Sum = %d", sum);
}

int main(void) {
  int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  sum_natural_numbers(number); //calling function
  return 0;
}