#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

	puts("Lispy Version 0.0.0.1");
	puts("Press Ctrl + c to Exit\n");

	while (1) {
		
		/* Output promt and get user input */
		char* input = readline("lispy> ");

		/* Add input to history */
		add_history(input);

		/* Echo user input */
		printf("No you're a %s\n", input);

		/* Free retrieved input */
		free(input);
	}

	return 0;
}
