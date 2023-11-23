#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double calculateStandardDeviation(double arr[], int size);

int main() {
   
    printf("Enter 5 real numbers: ");
    double numbers[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &numbers[i]);
    }

    
    double standardDeviation = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation = %.3lf\n", standardDeviation);

    return 0;
}


double calculateStandardDeviation(double arr[], int size) {

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    double mean = sum / size;


    double sumOfSquares = 0.0;
    for (int i = 0; i < size; ++i) {
        sumOfSquares += pow(arr[i] - mean, 2);
    }


    double variance = sumOfSquares / size;


    double standardDeviation = sqrt(variance);
    return standardDeviation;
}