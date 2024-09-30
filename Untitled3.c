#include <stdio.h>
int main() {
	int Per; //Per = Percentage
	printf("Enter your Per");
	scanf("%d", &Per);
	(Per < 0 || Per > 100)?printf("Wrong Entry"):(Per < 100 && Per >= 90)?printf("Grade A"):(Per < 90 && Per >=80)?printf("Grade B"):(Per < 80 && Per >=70)?printf("Grade C"):(Per < 70 && Per >= 60)?printf("Grade D"):printf("Grade F");
    return 0;
}
