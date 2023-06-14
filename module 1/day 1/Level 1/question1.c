// 1. Write a function to find biggest of 2 numbers using 
//     - if else
//     - ternary operator


#include<stdio.h>
int main ()					//IF ELSE
{
    int number1,number2;
    scanf("%d %d" ,&number1,&number2);

    if(number1 > number2)
	{
        printf("Greatest number is  %d",number1);
	}
    else
	{
        printf("Greatest number is %d",number2);    
	}
    return 0;

}

// ternary operator

#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=(a>b)? a:b;
	printf("greatest among is %d",c);
}