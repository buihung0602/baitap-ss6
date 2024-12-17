#include <stdio.h>
int a,b,c,product=1;
int main() {
	printf("cac so Armstrong co 3 chu so la: ");
for (int i=100;i<1000;i++) {
	a= i/100;
	b= (i/10)%10;
	c= i%10;
	product=(a*a*a)+(b*b*b)+(c*c*c);
	if (product==i) {
		printf("%d  ",i);
	}
} 
	return 0;
}
