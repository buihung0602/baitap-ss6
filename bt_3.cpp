#include <stdio.h>

int i,pass=5678910;
int main() {

	printf("nhap mat khau: ");
	scanf("%d",&i);

	while (i!=pass) {
	printf("mat khau sai!\nnhap lai mat khau (* co 7 chu so): ");
	scanf("%d",&i);
	}

	printf("mat khau dung!");

	return 0;
}
