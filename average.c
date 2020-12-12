#include<stdio.h>
int average(int []);
int size;

int average(int a[])
{
	float ave;
	int total=0;
	total=total+a[size];
	return total;
	ave=(float)total/size;
	return ave;

	
}














int main(void)
{
	int arrays[100];
	printf("enter size of the array as 5\n");
	scanf("%d",&size);
	
	int i;
	for(i=0;i<size; i++)
	{
		printf("enter the elements of array\n");
		scanf("%d",&arrays[i]);
		
	}
	
	printf("the average is %d",average(arrays));
	
}
