/*This is a C-Program to perform arithmetIc operations (addition, subtraction, multiplication, division and remainder) on two integers using pointers. User defined function has also been used in this program.*/
#include <stdio.h>
#include <conio.h>
void operation(int *a,int *b);
int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("Enter any 2 integers :- \n");
    scanf("%d %d", ptr1,ptr2);
    operation(ptr1,ptr2);
    return 0;
}
void operation(int *a, int *b){
    int sum,diff,product, quotient,remainder;
    sum=*a + *b;
    product=*a * *b;
    diff=*a - *b;
    quotient=*a / *b;
    remainder=*a % *b;
    printf("Addition : %d + %d= %d \t Subtraction : %d - %d= %d \n Product : %d * %d= %d \t On dividing %d/%d Quotient=%d and Remainder=%d",*a,*b,sum,*a,*b,diff,*a,*b,product,*a,*b,quotient,remainder);
}
