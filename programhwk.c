#include<stdio.h>
int addunits(int,int,int,int,int,int,int);
void getunits();
int unit1,unit2,unit3,unit4,unit5,unit6,unit7;
void getmarks
int addunits(int unit1,int unit2,int unit3,int unit4,int unit5,int unit6,int unit7)
{
    int total;
    total=unit1+unit2+unit3+unit4+unit5+unit6+unit7;
    return total;
}

void getunits()
{
    printf("enter the marks of unit 1\n");
    scanf("%d",&unit1);
    printf("enter the mark of unit 2\n");
    scanf("%d",&unit2);
    printf("enter the mark of unit 3\n");
    scanf("%d",&unit3);
    printf("enter the mark of unit 4\n");
    scanf("%d",&unit4);
    printf("enter the mark of unit 5\n");
    scanf("%d",&unit5);
    printf("enter the mark of unit 6\n");
    scanf("%d",&unit6);
    printf("enter the mark of unit 7\n");
    scanf("%d",&unit7);
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
    printf("the total marks scored by the student   is %d\n",addunits(unit1,unit2,unit3,unit4,unit5,unit6,unit7));
    }
	students++;
	}
    
}
