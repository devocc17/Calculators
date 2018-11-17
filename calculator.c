#include <stdio.h>

int a, b, c = 0; 
char operation, maybe, junk;

int main(){

	printf("Enter operation: (+, -, /, ect.):");
	scanf("%c", &operation);
	
	printf("\nEnter two numbers: a and b:");
	scanf("%f %f", &a, &b);

	do{
	switch(operation)
	{
		case '+':
			c = a + b;
		break;
		case '-':
			c = a - b;
		break;
		case '*':
			c = a * b;
		break;
		case '/':
			c = a / b;
		break;
	}
	printf("\nYour equation is: %d %c %d = %d", a, operation, b, c);

	printf("Is there more to calculate?:");
		scanf("%c%c", &maybe, &junk);
	}while(maybe == 'y');

return 0;
}