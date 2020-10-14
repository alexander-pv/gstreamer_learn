#include <stdio.h>

/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int main() {

    int a = 10;
    int b = 12;
    int max_value;
    max_value = max(a, b);
    printf("Max value is: %d\n", max_value);

    return 0;
};
