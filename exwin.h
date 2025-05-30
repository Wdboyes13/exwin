#ifndef EXWIN_H
#define EXWIN_H

#include <stdio.h>
#include <stdlib.h>

static inline void exwin() {
#ifdef _WIN32
    printf("GET OUTTT, Come back when you have a REAL OS\n");
    printf("Fatal Error: OS not liked by developer\n");
    exit(1);
#endif
}

#endif //EXWIN_H
