#include <stdio.h>
int main (){

	printf("Enter Character:\n");
	char c;
	scanf(" %c", &c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
		printf("%c is a vowel.\n", c);
	}
	else {
	       printf("%c is a constant.\n", c);	
	}
return 0;
}
