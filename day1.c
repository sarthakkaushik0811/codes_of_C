#include <stdio.h>

int main() {
/*Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1  : 3 4              Input 2  : -1 20
Output 1 :   Sum = 7        Output 2 :  sum = 19  */

    int a,b;
    printf("enter num1 & num2 \n");
    scanf("%d %d",&a,&b);

    int sum = a+b;

    printf("the sum is equals to %d\n",sum);

/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1  :  10 2                                         Input 2  :  7 3
Output 1:                                                Output 2:
Sum=12, Diff=8, Product=20, Quotient=5                   Sum=10, Diff=4, Product=21, Quotient=2  */

    int A,B;
    printf("enter num1 & num2 \n");
    scanf("%d %d",&A,&B);

    int SUM = A+B;
    int difference = A-B;
    int product = A*B;
    int quotient = A/B;

    printf("the sum is equals to %d\n",SUM);
    printf("the difference is equals to %d\n",difference);
    printf("the product is equals to %d\n",product);
    printf("the quoitent is equals to %d\n",quotient);
    return 0;

}
