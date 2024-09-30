#include <stdio.h> 
int main() {
	float a, b, c, sum;
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    
    sum = a + b + c;
    printf("Sum: %f\n", sum);
    if(a > 0 && b > 0 && c > 0 && sum == 180)  {
    	printf("It's a valid Triangle");
	} else {
		printf("Triangle is not valid");
	}
	printf("number of 1s are %d",counting);
    return 0;
}
