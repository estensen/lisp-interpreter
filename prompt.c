#include <stdio.h>

/* Declare a buffer for user input size 2048 */
static char input[2048];

int main(int argc, char** argv) {

	puts("Lispy Version 0.0.0.1");
	puts("Press Ctrl + c to Exit\n");

	while (1) {

		/* Output prompt */
		fputs("lispy> ", stdout);

		/* Read a line of user input */
		fgets(input, 2048, stdin);

		/* Echo user input */
		printf("No you're a %s", input);
	}

	return 0;
}
