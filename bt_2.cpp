#include <stdio.h>

int main() {
    int so, a = 0, b = 0;

    for (int i = 0; i < 5; i++) {
        printf("nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &so);

        if (so % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }

    printf("so luong so chan la: %d\n", a);
    printf("so luong so le la: %d\n", b);
    
    return 0;
}
