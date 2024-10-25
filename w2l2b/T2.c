#include <stdio.h>
int main() {
	int grade=0;


	printf("Enter grade\n");
	scanf(" %d", &grade);

	if (grade >= 73) {
	printf("A\n");
	}

	else if (grade >= 63) {
		if (grade < 68) {
			printf("B\n");
		}
		else {
			printf("B+\n");
		}
	}

	else if (grade >= 52) {
		if (grade < 58) {
			printf("C\n");
		}
                else {
			printf("C+\n");
		}
	}
        
	else if (grade >= 41) {
		if (grade < 47) {
			printf("D\n");
		}
                else {
			printf("D+\n");
		}
	}
	else {
		printf("F\n");
	}
	return 0;
}

