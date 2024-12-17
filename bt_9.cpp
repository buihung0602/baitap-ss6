#include <stdio.h>
int a,b,c;
int main () {
	for(a=1;a<=9;a++) {
		for(b=0;b<=9;b++) {
			for(c=0;c<=9;c++){
				if (a*a*a+b*b*b+c*c*c==a*100+b*10+c) {
					printf("%d  ",a*100+b*10+c);
				}
			}
		}
	}
	return 0;
} 
