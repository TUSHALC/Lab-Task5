#include <stdio.h> 
int main() {
	int age;
	char Ci; //Ci = Citizenship
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter the Ci: ");
	scanf(" %c", &Ci);
	if(age>=18 && Ci == 'Y') {
		
			printf("You are eligible to vote");
		} else {
			printf("You are not eligible to vote");
		}
	
	return 0;
}
