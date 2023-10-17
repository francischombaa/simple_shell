#include "cray_shell.h"

void run_command(const char *command)
{
	pid_t child_pid;
	char *args[2];
	args[0] = (char *)command;
	args[1] = NULL;

	child_pid = fork();

<<<<<<< HEAD
    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        /*Child process*/
        /*Construct the full path to the command*/
        char command_path[256];
        snprintf(command_path, sizeof(command_path), "/bin/%s", command);
=======
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/* Child process */
		/* Construct the full path to the command */
		char command_path[256];
		snprintf(command_path, sizeof(command_path), "/bin/%s", command);
>>>>>>> 35a082f5abe7b4b03aa34ae1f3cfeb8ccbd18a1a

		execve(command_path, args, NULL);

<<<<<<< HEAD
        perror("execve");
        exit(EXIT_FAILURE);
    } else {
        /*Parent process*/
        wait(NULL);
    }
=======
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Parent process */
		wait(NULL);
	}
>>>>>>> 35a082f5abe7b4b03aa34ae1f3cfeb8ccbd18a1a
}

