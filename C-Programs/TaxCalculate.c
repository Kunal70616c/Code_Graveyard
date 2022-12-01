//Write a Program that asks user to enter the amount of taxable income, then tax due

#include<stdio.h>

int main()
{
	float tax,income;
	printf("\nEnter Your Income (in $):");
	scanf("%f",&income);
	if(income<=0)
	{
		printf("\nNo Tax Required:");
		return 0;
	}
	else if(income < 750)
	{
		tax = (income * 0.01);
		printf("\n The Due TAX on Your Income %f$ is , %f$",income,tax);
	}
	else if(income >= 750 && income <2250)
	{
		tax = (income * 0.02);
		printf("\n The Due TAX on Your Income %f$ is , %f$",income,tax+7.50);
	}
	else if(income >= 2250 && income <3750)
	{
		tax = (income * 0.03);
		printf("\n The Due TAX on Your Income %f$ is , %f$",income,tax+37.50);
	}
	else if(income >= 3750 && income <5250)
	{
		tax = (income * 0.04);
		printf("\n The Due TAX on Your Income %f$ is , %f$",income,tax+82.50);
	}
	else if(income >= 5250 && income < 7000)
	{
		tax = (income * 0.05);
		printf("\n The Due TAX on Your Income %f$ is , %f$",income,tax+142.50);
	}
	else if(income >= 7000)
	{
		tax = (income * 0.06);
		printf("\n The Due TAX on Your Income %f$ is , %f$",income,tax+230.00);
	}
	return 0;
}
