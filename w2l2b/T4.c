#include <stdio.h>

int main() {

	int room =0;
	printf("Enter number of rooms:\n");
	scanf("%d", &room);
	if (room < 250) {
		printf("The electricity bill is %d PKR", room *18);
	}
	else if (room < 400) {
		printf("The electricity bill is %d PKR", room *30);
	}
	else if (room <500) {
		printf("The electricity bill is %d PKR", room * 40);
	}
	else {
		printf("The electricity bill is %d PKR", room * 60);
	}

	return 0;
}
