#include "cray_shell.h"

/**
 * cray_input - Read a line of text from standard input
 * @command: The buffer to store the input text
 * @size: The size of the buffer
 *
 * Description:
 * This function reads a line of text from standard input and stores it in the
 * provided buffer, removing the trailing newline character if present.
 */
void cray_input(char *command, size_t size) {
	if (fgets(command, size, stdin) == NULL) {
		if (feof(stdin)) {
			cray_print("\n");
			exit(EXIT_SUCCESS);
		} else {
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline */
}
