#include <stdio.h>
#include <systemcall.h>

#ifndef VERSION
#define VERSION "N/D"
#endif

int main(int argc, char *argv[]) {
    printf("Hello World, %s\n", VERSION);
    printf("%i\n", call());
    return 0;
}
