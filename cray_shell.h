#ifndef SHELL_H
#define SHELL_H
/*
*Author: Fraanklin Chombaa & Leonard Ketere
*This is my main header file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
#include <errno.h>

/*
 *these are declarations for all the functions.
 */
void cray_prompt(void);
void cray_print(const char *crayprint);
void cray_input(char *command, size_t size);
void run_command(const char *command);

#endif /*SHELL_H*/
