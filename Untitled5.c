#include <stdio.h> 
int main() {
	int a;
	printf("Enter a: ");
	scanf("%d", &a);
	if((a&1)==0) {
		printf("number is even");
		
	} else {
		printf("number is odd");
	}
	return 0;
}
