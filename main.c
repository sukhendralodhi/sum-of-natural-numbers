#include <stdio.h>
//function declration
int sum_natural_numbers(int x) {
  int sum=0;
  
  for(int i = 0; i <= x; i++) {
    sum+=i;
  }
  return sum;
}

int main(void) {
  int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  int result = sum_natural_numbers(number); //calling function
  printf("Sum = %d", result);
  return 0;
}