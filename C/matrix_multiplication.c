#define M 20
#define N 30
#define P 40
#include<stdio.h>
#include <stdlib.h>
int main(){
    
    double x[M][N],y[N][P],z[M][P];
    // Fill x with random values between -10 and 10
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 30; j++) {
            x[i][j] = (double)rand() / RAND_MAX * 20 - 10;
        }
    }
    // Fill y with random values between 0 and 100
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 40; j++) {
            y[i][j] = (double)rand() / RAND_MAX * 100;
        }
    }
    // Print elements of x
    printf("Matrix x:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 30; j++) {
            printf("%f ", x[i][j]); // Print element with a space
        }
        printf("\n"); // Move to a new line after each row
    }
    // Print elements of y
    printf("\nMatrix y:\n");
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 40; j++) {
            printf("%f ", y[i][j]); // Print element with a space
        }
        printf("\n"); // Move to a new line after each row
    }
    //Actual Work 
    for(int i=0;i<M;i++){
        for(int j = 0; j< P; j++) {
            z[i][j]=0;
        for(int k =0 ;k<N;k++){
            z[i][j] += x[i][k] * y[k][j];
        }
    }
}
    // Print elements of z
    printf("\nMatrix z (after multiplication):\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 40; j++) {
            printf("%f ", z[i][j]); // Print element with a space
        }
    printf("\n"); // Move to a new line after each row
  }

    return 0;
}