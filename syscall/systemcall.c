#include "systemcall.h"
#include <stdlib.h>

int call()
{
    const char *command = "echo 'Hallo Lukas!'";
    return system(command);
}