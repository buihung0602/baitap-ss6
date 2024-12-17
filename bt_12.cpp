#include <stdio.h>

int a=0,b=1,n,x;
int main() {

	printf("nhap vao mot so nguyen: ");
	scanf("%d",&n);
	
	while(n<=0) {
		printf("vui long nhap so nguyen > 0: ");
		scanf("%d",&n);
	}
	
	for (int i=1;i<=n;i++) {
		printf("%d ",a);
		x=a+b;
		a=b;
		b=x;
	}

	return 0;
}
