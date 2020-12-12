#include<stdio.h>
int add(int,int);
int sub(int,int);
int mult(int, int);
float divi(int,int);
void getnumbers();
int num1,num2;

int add(int num1,int num2)
{
    int addition;
    addition=num1+num2;
    return addition;
}

int sub(int num1,int num2)
{
    int difference;
    difference=num1-num2;
    return difference;
}

int mult(int num1,int num2)
{
    int multiplication;
    multiplication=num1*num2;
    return multiplication;
}

float divi(int num1,int num2)
{
    float division;
    division=num1/num2;
    return division;
}
 void getnumber()
 {
    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second number\n");
    scanf("%d",&num2);
 }
 
 int main(void)
 {
    getnumber();
    printf("the sum of the two numbers is %d\n",add(num1,num2));
    printf("the difference of the two numbers is %d\n",sub(num1,num2));
    printf("the multiplication of the numbers is %d\n",mult(num1,num2));
    printf("the division of the numbers is %.2f\n",divi(num1,num2));
 }
