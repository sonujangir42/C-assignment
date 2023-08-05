//WAP to check if the given year is a leap year or not. 

#include<stdio.h>
main()
{
	int y;
	printf("Leap Year or Not\n");
	printf("Enter the Year:\n");
	scanf("\n%d",&y);
	if(y%4==0)
	{
		printf("\n%d is a Leap Year",y);
	}
	else if(y%400==0)
	{
		printf("\n%d is Leap Year",y);
	}
	else if(y%100==0)
	{
		printf("\n%d is not Leap Year",y);
	}
	else
	{
		printf("\n%d is not Leap Year",y);
	}
}
