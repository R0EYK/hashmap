#define NOB_IMPLEMENTATION
#define BUILD_FOLDER "build/"
#include "nob.h"

int main(int argc , char** argv){
    NOB_GO_REBUILD_URSELF(argc , argv);
    Nob_Cmd cmd = {0};
    nob_cmd_append(&cmd , "gcc");
    nob_cmd_append(&cmd , "-Wall" , "-Wextra" , "-ggdb" , "-pedantic");
    nob_cmd_append(&cmd , "-o" , "main");
    nob_cmd_append(&cmd , "main.c");
    if(!nob_cmd_run_sync(cmd)) return 1;
    cmd.count =  0;
    nob_cmd_append(&cmd , "./main");
    if(!nob_cmd_run_sync(cmd)) return 1;
    
    
    return 0 ;
}
