#include <stdio.h>

int main() {
/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1  :  5 10                Input 2  :  3 7
Output 1 :                      Output 2:
Area=50, Perimeter=30           Area=21, Perimeter=20  */

    int l,b;
    printf("enter length and bredth\n");
    scanf("%d %d",&l,&b);

    int perimeter = 2*(l+b);
    int area = l*b;
    printf("perimeter is equals to %d\n",perimeter);
    printf("area is equals to %d\n",area);


/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1  : 7                             Input 2  : 3
Output 1 :                               Output 2:
Area=153.94, Circumference=43.96         Area=28.27, Circumference=18.85  */
    
    int r;
    printf("enter radius\n");
    scanf("%d",&r);


    printf("area of circle %d\n",(r*r*22)/7);
    printf("circumference of circle %d\n",(2*22*r)/7);

    return 0;
}