#include <stdio.h>

int main(){
/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1 : 2020
Output 1 : Leap year

Input 2 : 1900
Output 2 : Not a leap year

Input 3 : 2000
Output 3 : Leap year*/
    int year;
    printf("enter the year");
    scanf("%d",&year);

    if (year%4==0 || year%400==0 && year%100!=0)
    printf("it is a leap year \n ");
    else
    printf("it is not a leap year \n ");
        
    return 0;
}
#include <stdio.h>

int main(){

    /*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1 : a
Output 1 : Vowel

Input 2 : b
Output 2 : Consonant*/
    char ch;
    printf("enter the alphabet \n");
    scanf("%c",&ch);
    if ( 'a' == ch || 'e' == ch ||
         'i' == ch || 'o' == ch ||
         'u' == ch
       )
    printf("it is a vowel \n");
    else
    printf("it is a consonant");    
    return 0;
}