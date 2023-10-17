#include "cray_shell.h"

void run_command(const char *command) {
    pid_t child_pid;
    char *args[2];
    args[0] = (char *)command;
    args[1] = NULL;

    child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        /* Child process */

        /* Construct the full path to the command */
        char command_path[256];
        snprintf(command_path, sizeof(command_path), "/bin/%s", command);

        execve(command_path, args, NULL);

        perror("execve");
        exit(EXIT_FAILURE);
    } else {
        /* Parent process */
        wait(NULL);
    }
}
