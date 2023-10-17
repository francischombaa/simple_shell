#include "cray_shell.h"

/**
 * cray_print - Custom print function.
 * @crayprint: The string to be printed.
 */
void cray_print(const char *crayprint)
{
	write(STDOUT_FILENO, crayprint, strlen(crayprint));
}
