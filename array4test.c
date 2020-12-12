#include<stdio.h>
int main(void)

{
	int marks[7];
	int i;
	int sum=0;
	for (i=0;i<7; i++)
	{
	printf("enter marks \n");
	scanf("%d",&marks[i]);
	sum=sum+marks[i];	
	}
	printf("%d",sum);
}
