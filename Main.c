#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	float firstNum;
	float secondNum;
	char mathCommand;
	float result;

	printf("Welcome to calculator!\n");
	printf("Enter your equation:\n");
	scanf_s("%f %c %f", &firstNum, &mathCommand, 1, &secondNum);

	switch (mathCommand) {
		case '/':
			result = firstNum / secondNum;
			break;
		case '*':
			result = firstNum * secondNum;
			break;
		case '+':
			result = firstNum + secondNum;
			break;
		case '-':
			result = firstNum - secondNum;
			break;
		default:
			goto fail;
	}

	printf("%.9g %c %.9g = %.6g\n\n", firstNum, mathCommand, secondNum, result);
	goto exit;

	fail:
		printf("invalid command\n");
		return EXIT_FAILURE;

	exit:
		return EXIT_SUCCESS;

}