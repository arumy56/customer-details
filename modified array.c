#include<stdio.h>
void getarrays();
//int modify(int[]);
int addarrays(int[]);
int numbers;





int modify(int *a[])
{
	//int x;
	int i;
	int j;
	for(i=0; i<numbers; i++)
	{
	
	  for (j=i+10; j<numbers; j++)
}
	
	
	printf("%d",*a[i]);

}


int addarrays(int a[])
{
	int sum=0;
	int i;
	for(i=0; i<numbers; i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	
	}
	
	printf("%d",sum);
}



int main(void)

{
    int choose;
	int *pointers;
	
    int i; 
    int  arrays[numbers];
    for(i=0;i<numbers; i++)
    {
    scanf("%d",&arrays[i]);
	}
	getarrays(arrays);
	pointers=&arrays;
	
	
	printf("choose what you want to do\n");
	printf("1.Get the values of array\n 2. modify the values of the array by adding 10 to each value of the array and display it\n 3.Calculate sum of the modified values of arrays and display sum\n");
	scanf("%d",&choose);
	


		
	
switch(choose)
{
	case 1:
	getarrays(arrays);
	break;
	
	case 2:
	modify(&arrays);
	break;
	
	case 3:
	printf("enter the values of modfied arrays\n");
	addarrays(arrays);
	break;
	
	default:
	printf("invalid");
}
}
		
	

