#include "cray_shell.h"
/*
*Author: Fraanklin Chombaa & Leonard Ketere
*This prototype is to allow the user to input command
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
    command[strcspn(command, "\n")] = '\0'; /*Remove newline*/
}
