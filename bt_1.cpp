#include <stdio.h>

int main() {
    int so, sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &so);

        if (so % 2 != 0) {
            sum += so;
        }
    }

    printf("tong cac so le la: %d\n",sum);
    
    return 0;
}

