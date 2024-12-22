#include <stdio.h>

int main() {
    double principal, interestRate, totalAmount;
    int months;

    printf("nhap so tien gui ban dau: ");
    scanf("%lf", &principal);
    printf("nhap lai suat thang (phan tram): ");
    scanf("%lf", &interestRate);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);

    interestRate = interestRate / 100;

    totalAmount = principal;
    for (int i = 0; i < months; i++) {
        totalAmount += totalAmount * interestRate; 
    }

    double interestEarned = totalAmount - principal;

    printf("tien ban dau: %.2f\n", principal);
    printf("lai suat: %.2f%%\n", interestRate * 100);
    printf("so thang gui: %d\n", months);
    printf("tien lai: %.3f\n", interestEarned);
    printf("tien nhan duoc: %.3f\n", totalAmount);

    return 0;
}

