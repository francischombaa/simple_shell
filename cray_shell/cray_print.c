#include "cray_shell.h"
/*
*Author: Fraanklin Chombaa & Leonard Ketere
*This is a custom print function which will be used insted of printf
*/
void cray_print(const char *crayprint) {
    write(STDOUT_FILENO, crayprint, strlen(crayprint));
}
