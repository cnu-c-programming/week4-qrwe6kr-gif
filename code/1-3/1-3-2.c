#include <stdio.h>

#include "util.h"

void logger_global(char* message) {
    staitc int counter = 0;
    printf("log %2d: %s\n", counter++, message);
}

void task2() {
    for (int i=0; i<4; i++) {
        logger_static_intline("task2");
        logger_global("task2");
    }
}
