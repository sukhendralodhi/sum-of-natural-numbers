#include <stdio.h>
//function declration
int sum_natural_numbers(int x) {
  int sum=0;
  
  for(int i = 0; i <= x; i++) {
    sum+=i;
  }
  return sum;
}

int reverse_number(int n) {
  for(int i = n; i >= 1; i--) {
    printf("%d\n",i);
  }
}

int main(void) {
  int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  int result = sum_natural_numbers(number); //calling function
  printf("Sum = %d\n", result);
  printf("\n");
  // reverse_number(number);
  printf("Reverse number: \n");
  printf("%d",reverse_number(number));
  return 0;
}