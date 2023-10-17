#include "cray_shell.h"

/**
 * cray_print - Custom print function used instead of printf.
 * @crayprint: The string to be printed.
 *
 * Description: This function writes the specified string to the standard output.
 */
void cray_print(const char *crayprint)
{
        write(STDOUT_FILENO, crayprint, strlen(crayprint));
}

