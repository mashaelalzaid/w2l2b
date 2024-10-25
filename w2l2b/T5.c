#include <stdio.h>
int main(){

	int age =0;
	int pizza=0;
	int exercise =0;
	int fit =0;
	printf("Enter Age:\n");
	scanf("%d", &age);
	printf("Enter Number of Pizzas\n");
	scanf("%d", &pizza);
	printf("do you exercise? 0 if no and 1 if yes?\n");
	scanf("%d", &exercise);
	
	if (age < 25) {
		fit = 1;
	}
	else if (age >= 25) {
		fit =0;
	}
	else {
		if (exercise == 1) {
			if (pizza < 4){
			fit =1;}
			else {
			fit=0;}	
		}
		else {
			fit = 0;
		}
		}
	
	if (fit == 0){
		char unfitStr[] = "Unfit";
		printf("Your fitness level is: %s\n", unfitStr);	
	}
	else {
		char fitStr[] = "Fit";
		printf("Your fitness level is: %s\n", fitStr);
	}
}
