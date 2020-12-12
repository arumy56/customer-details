#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int main(void)
{
    int num;
    int i;
    int points;
    printf("enter the number of times to play\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
    int random1;
    int random2;
    int j=0;
    int num1;
    int num2;
    srand(time(0));
    random1=(rand()%10)+1;
    random2=(rand()%10)+1;
    printf("enter numbers of your range between 1 to ");
    scanf("%d",&j);
    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second number\n");
    scanf("%d",&num2);
        
        
        
    int ichoose;
    int add;
    int sub;
    int divi;
    printf("select what you want to do\n");
    printf("1.add\n 2.sub\n 3.divi\n");
    scanf("%d",&ichoose);
        
    switch(ichoose)
    {
    case 1:
    printf("addition\n");
    add=num1+num2;
    printf("answer is %d\n",add);
    break;
            
   case 2:
   printf("subtraction\n");
   sub=num1-num2;
   printf("answer is %d\n",sub);
   break;
            
    case 3:
    printf("division\n");
    divi=num1/num2;
    printf("answer is %d\n",divi);
    break;
            
   
    }
        
    if (((add==random1+random2)||(sub==random1-random2)||(divi==random1/random2)))
    {
    printf("player wins\n");
    printf(" you have %d point \n",points);
    points++;
            
    }
    else
    {
    printf("try again you lost\n");
    printf("this are random numbers %d %d\n",random1,random2);
    }
        
        
    }
}
