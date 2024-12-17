#include <stdio.h>
int a,b,c,d,e,even=0,odd=0;
int main () {
	printf("nhap vao 5 so nguyen: \n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if (a%2==0) {
		even++;
	}else{
		odd++;
	}
	if (b%2==0) {
		even++;
	}else {
		odd++;
	}
	if (c%2==0) {
		even++;
	}else {
		odd++;
	}
	if (d%2==0) {
		even++;
	}else {
		odd++;
	}
	if (e%2==0) {
		even++;
	}else {
		odd++;
	}
	printf("so luong so chan: %d\n",even);
	printf("so luong so le: %d",odd);
	return 0;
}
