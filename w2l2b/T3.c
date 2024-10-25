#include <stdio.h>
int main(){

	float distance;
	char mode;


	printf("Enter Distance in KM\n");
	scanf("%f", &distance);

	printf("Enter mode of transportation: (W for walking, B for Bicycle, C for Car)\n");        
	scanf(" %c", &mode);

	switch (mode) {
	
	case 'W':
		printf("Expected time is %f\n", distance / 5);
		break;

        case 'C':
               printf("Expected time is %f\n", distance / 60);
               break;

        case 'B':
               printf("Expected time is %f\n", distance / 18);
               break;

	default:
	       printf("Specify mode of transportation\n");

	}
	
return 0;
}
