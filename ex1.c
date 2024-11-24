 /******************
Name:
ID:
Assignment:ex1
*******************/
#include <stdio.h>

 // REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  // Set bit
  int x1, y1;
  printf("Please enter a number:\n");
  scanf("%d", &x1);
  printf("Please enter a position:\n");
  scanf("%d", &y1);
  int sum1 = x1 >> y1;
  sum1 = sum1 & 1;
  printf("The bit in position %d of number %d is: %d\n", y1, x1, sum1);

  printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int x2, y2;
  printf("Please enter a number:\n");
  scanf("%d", &x2);
  printf("Please enter a position:\n");
  scanf("%d", &y2);
  int sum2 = 1 << y2;
  printf("Number with bit %d set to 1: %d\n", y2, (sum2 | x2));
  printf("Number with bit %d set to 0: %d\n", y2, (~sum2 & x2));

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int x3, y3;
  printf("Please enter a number:\n");
  scanf("%d", &x3);
  printf("Please enter a position:\n");
  scanf("%d", &y3);
  int sum3 = 1 << y3;
  printf("Number with bit %d toggled: %d\n", y3, (sum3 ^ x3));

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int x4;
  printf("Please enter a number:\n");
  scanf("%d", &x4);
  int temp = x4 >> 1;
  temp = temp << 1;
  printf("%d\n", (x4 ^ temp) ^ 1);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int x5,y5;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &x5);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &y5);
  int sum5 = x5+y5;
  int pos1 = sum5 >> 3;
  pos1 = pos1 & 1;
  int pos2 = sum5 >> 5;
  pos2 = pos2 & 1;
  int pos3 = sum5 >> 7;
  pos3 = pos3 & 1;
  int pos4 = sum5 >> 11;
  pos4 = pos4 & 1;
  printf("The sum in hexadecimal: %X\n", sum5);
  printf("The 3,5,7,11 bits are:%d%d%d%d\n", pos1, pos2, pos3, pos4);
  printf("Bye!\n");
  
  return 0;
}

