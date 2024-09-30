#include <stdio.h>
int main() {
	int Purchase;
	char Membership;
	printf("Enter your Total Purchase: ");
	scanf("%d", &Purchase);
	printf("Do you have a Membership?: ");
	scanf(" %c", &Membership);
	(Purchase <= 100)?printf("Sorry there is no discount for you"):(Membership == 'Y')?printf("There is a discount available for you"):printf("Sorry there is no discount for you");
	return 0;
}
