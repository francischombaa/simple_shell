#include "cray_shell.h"
/*
*Author: Franklin Chombaa & Leonard Ketere
*This is our main entry point
*/
int main(void) {
    char command[108];
    while (1) {
        cray_prompt();
        cray_input(command, sizeof(command));
        run_command(command);
        
    }
    return 0;
}
