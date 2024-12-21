//Factorial Calculation:
//Create a program that takes an integer input from the user and calculates its factorial, then prints the result.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int input,result=1;
    printf("Enter Input ::");
    scanf("%d",&input);
    for(int i = input;i>1;i--){
        result *= i; 
    }
    printf("\n Result = %d",result);
    return 0;
}