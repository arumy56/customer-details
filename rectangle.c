#include<stdio.h>
int rectangle(int length,int width)
{
    int area;
    area=length*width;
	
	
	return area;
}

int volumecube(int length,int width,int height)
{

    int volume;
    volume=length*width*height;
    
    return volume;
    
}

int main(void)
{
    //area of rectangle
	int length,width;
	printf("we are doing for rectangle\n");
    printf("enter length\n");
    scanf("%d",&length);
    
    printf("enter width\n");
    scanf("%d",&width);
    printf("the area rectangle is %d\n",rectangle(length,width));
    
    //volume of cube
    int lengthcube;
    printf("enter the length\n");
    scanf("%d",&lengthcube);
    int widthcube;
    printf("enter the width\n");
    scanf("%d",&widthcube);
    int height;
    printf("enter the height\n");
    scanf("%d",&height);
    printf("the volume of the cube is %d",volumecube(lengthcube,widthcube,height));

    }
