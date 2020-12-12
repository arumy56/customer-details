#include<stdio.h>
int addTwonumbers(int,int);
void getNumbers();
float divide(int, int);
int num1, num2;

int addTwonumbers(int number1,int number2)
{
	int sum;
	sum=number1+number2;
	return sum;
}
void getNumbers()
{
	printf("Enter two numbers\n");
	printf("Enter the first number\n");
	scanf("%d",&num1);
	printf("Enter the second number\n");
	scanf("%d",&num2);
	
}

void main()
{
	//int sum1=addTwonumbers(30,60);
	getNumbers();
	//printf("The sum is %d\n",sum1);
	printf("The sum  is %d\n",addTwonumbers(num1,num2));
}
