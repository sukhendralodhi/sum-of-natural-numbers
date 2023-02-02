#include <stdio.h>
// function declration
int sum_natural_numbers(int x) {
  int sum = 0, reverse;

  for (int j = x; j >= 1; j--) {
    sum += j;
    reverse = j;
    printf("%d\n", reverse);
  }
  return sum;
}

// int reverse_number(int n) {
//   for(int i = n; i >= 1; i--) {
//     printf("%d\n",i);
//   }
// }

int main(void) {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("\n");
  printf("Reverse number: \n");
  printf("\n");
  int result = sum_natural_numbers(number); // calling function
  // int restric1 = sum_natural_numbers(number);
  printf("\n");
  printf("Sum = %d\n", result);
  // printf("Sum = %d\n", restric1);

  // reverse_number(number);

  // printf("%d",reverse_number(number));
  return 0;
}