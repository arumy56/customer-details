#include<stdio.h>
int addunits(int);
void getunits();
int marks,unit;


int addunits(int a)
{
   	int total=0;
	int i;
	for (i=0;i<unit; i++)
	{
	
	total=total+(i*a);
	}
	return total;
}

void getunits()
{
    

      
    for(unit=1; unit<=7;unit++)
    {
    printf("enter the marks of the unit %d :",unit);
    scanf("%d",&marks);
      
          
    }
}



int main(void)
{
    
    int students=1;
    int number;
    printf("enter the number of students\n");
    scanf("%d",&number);
 
   

    while(students<=number)
    {
    printf("this is student %d\n",students);
    {
	
	getunits();
    
    }
    printf("the total marks scored by the student   is %d\n",addunits);
    students++;
    }
    
   
}
