#include <stdio.h>
#include <string.h>

#define PI 3.14159625

int main () {
  double amount;

  printf("Enter a dollar amount: ");
  scanf("%lf", &amount);

  amount = amount + (0.05 * amount);

  printf("With tax added: %.2lf", amount);
}