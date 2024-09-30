#include <stdio.h> 
int main() {
	int a,counting;
	printf("Enter a: ");
	scanf("%d", &a);
	if(a==0) {
		return 0;
	}
	a=a&(a-1);
	counting=1;
	if(a!=0) {
		counting+=1;
		a=a&(a-1);
	}
	if (a!=0) {
		counting+=1;
		a=a&(a-1);
	}
	if (a!=0) {
		counting+=1;
		a=a&(a-1);
	}
	if (a!=0) {
		counting+=1;
		a=a&(a-1);
	}
	printf("number of 1s are %d",counting);
	return 0;
}
