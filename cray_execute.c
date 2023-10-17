#include "cray_shell.h"

/**
 * run_command - Execute a shell command.
 * @command: The command to execute.
 */
void run_command(const char *command)
{
        pid_t child_pid;
        char *args[2];
        args[0] = (char *)command;
        /*line after declaration*/
        args[1] = NULL;

        child_pid = fork();

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
                /*line after declaration*/
                execve(command_path, args, NULL);

                perror("execve");
                exit(EXIT_FAILURE);
        }
        else
        {
                /* Parent process */
                wait(NULL);
        }
}
