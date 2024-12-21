//Write a program that asks user a 24-hour time and then display the time in 12-hour form

#include<stdio.h>

int main()
{
	int hour,min;
	printf("\nEnter Time In 24-hour format(Devide Hour & Min By Space):");
	scanf("%d %d",&hour,&min);
	if(hour < 0 || hour > 24 )
	{
		printf("\nInvalid Time Input");
		return 0;
	}
	else if (hour == 24 && min !=0)
	{
		printf("\nInvalid Time Input");
		return 0;
	}
	else if (min > 60 || min < 0)
	{
		printf("\nInvalid Time Input");
		return 0;
	}
	
	printf("\nEnterd Time(24H Format): %d : %d",hour,min);
	
	if(hour == 12 )
	{
		printf("\nResult Time(12H Format): %d : %d PM",hour,min);
	}
	else if(hour == 24)
	{
		printf("\nResult Time(12H Format): %d : %d AM",hour-12,min);
	}
	else if(hour > 12)
	{
		printf("\nResult Time(12H Format): %d : %d PM",hour-12,min);
	}
	else if(hour < 12)
	{
		printf("\nResult Time(12H Format): %d : %d AM",hour,min);
	}
	
	return 0;
}
