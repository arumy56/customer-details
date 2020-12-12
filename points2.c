#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int main(void)
{
   int points=0;
   int i=0;
   while(i<5)
   {
   
    int random1;
    int random2;
    srand(time(0));
    random1=(rand()%10)+1;
    random2=(rand()%10)+1;
    int sumrandom=random1+random2;
    int userinput1;
    int userinput2;
    int usersum=userinput1+userinput2;
    printf("enter two numbers between 1-10\n");
    printf("enter the first number\n");
    scanf("%d",&userinput1);
    printf("enter the second number\n");
    scanf("%d",&userinput2);
    
   if((sumrandom==usersum) &&((sumrandom==7) || (sumrandom==11)))
    {
       
	   
	   printf("player wins\n");
	   printf("you have %d points\n",points);
	   points++;


    }
    else
    {
        printf("player loses\n try again\n");
	    printf("this is your random numbers %d %d and sum %d\n",random1,random2,sumrandom);
	  
    }
    i++;

}
}
