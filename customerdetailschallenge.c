#include<stdio.h>
#include<string.h>
#include<ctype.h>
int menu();




int menu()

{
	printf("what would like to do\n");
	printf("1.write customer details file\n");
	printf("2.read the customer details file after ypou have written\n");
	printf("3.exit\n");
}

typedef struct customer
{
    char customername[50];
	char typeofcustomer[45];
	char address[50];
	char amountofpurchaseinsevendays[50];
	char totalweekspurchases[60];
		
}Customers;


int main(void)
{
	FILE *write;
	FILE *read;
	write=fopen("customerdetail.txt","w");
	
	if(write==NULL)
	{
		printf("cant open the file\n");
		
	}
	else
	{
	
	int number;
	Customers customer[number];
	printf("enter the number of customers\n");
	scanf("%d",&number);
	int i;
	for(i=0; i<number; i++)
	{
		
		
		printf("enter the details of customer %d",i+1);
		getchar();
		printf("\ncustomername:");
		scanf("%[^\n]s",customer[i].customername);
		getchar();
		printf("\ntype of customer:");
		scanf("%[^\n]s",customer[i].typeofcustomer);
		getchar();
		printf("\naddress:");
		scanf("%[^\n]s",customer[i].address);
		getchar();
		printf("\namount of purchases in seven days:");
		scanf("%[^\n]s",customer[i].amountofpurchaseinsevendays);
		getchar();
		printf("\ntotal weeks purchases");
		scanf("%[^\n]s",customer[i].totalweekspurchases);
		getchar();
		printf("name:%s\ttype of customer:%s\taddress:%s\tamountinsevendays:%s\ttotalweekspurchases:%s\n",customer[i].customername,customer[i].typeofcustomer,customer[i].address,customer[i].amountofpurchaseinsevendays,customer[i].totalweekspurchases);
		fprintf(write,"%s\t%s\t%s\t%s\t%s\n",customer[i].customername,customer[i].typeofcustomer,customer[i].address,customer[i].amountofpurchaseinsevendays,customer[i].totalweekspurchases);
		
	}
	
	
		
		
	}
	fclose(write);
	
	
	


	
	
	
	
	
}
	
	
	
	
	
	
	

























