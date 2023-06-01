#include<stdio.h>

float checkDivisibility(int vehicleNumber, float price) {
    if (vehicleNumber%7 == 0 && vehicleNumber%3 == 0) {
        return (float)(price/3);
    } else if (vehicleNumber%7 == 0 || vehicleNumber%3 == 0) {
        return (float)(price/2);
    } else {
        return price;
    }
}

int main() {
    int vehicleNumber;
    float price;
    printf("Enter vehicle number: ");
    scanf("%d", &vehicleNumber);
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Final price: %f", checkDivisibility(vehicleNumber, price));
}