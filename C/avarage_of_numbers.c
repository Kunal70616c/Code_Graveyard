//Calculate the Average:
//Write a program that takes five numbers as input and calculates their average, then prints the result.
#define MAX 5
#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int arr[MAX],total=0;
    for(int i=0;i<MAX;i++){
        arr[i] = rand()%(10+1);
    }

    for(int i=0;i<MAX;i++){
        total += arr[i];
    }
    
    double avg = (double)total / MAX;
    printf("Total = %d || Average: %.2f", total,avg);
    return 0;
}
