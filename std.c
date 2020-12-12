#include<stdio.h>
int main(void)
{
    int student=1;
    while(student<10)
    {
       int unitmarks[7];
       int studentmarks;
       printf("this is the %d student detail\n",student);
       student++;
       for(unitmarks=0; unitmarks<7;unitmarks++)
       printf("enter the marks of the unit  :");
       scanf("%d",&unitmarks[unitmarks]);
    {
        studentmarks=unitmarks[0]+unitmarks[1]+unitmarks[2]+unitmarks[3]+unitmarks[4]+unitmarks[5]+unitmarks[6];
    }
       
    
    
    printf("student %d scored a total marks %d in 7 units",student,studentmarks);
    
    }
}
