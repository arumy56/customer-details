#include<stdio.h>






int main()
{
	

float array[]={10,2,3.5,5,20,15};


int i;
int more=7;
int product=1;
for(i=0; i<6; i++)
{
	
	product=product*array[i];
	

}

printf("the product is %d\n",product);	
printf("the number greater than 7 are :  \n");

for(i=0; i<6; i++)
{
	if(array[i]>more)
	{
		printf("%.2f\v\n",array[i]);
	}
}


}
