#ifndef EXWIN_H
#define EXWIN_H

void exwin() {
#ifdef _WIN32
    printf("GET OUTTT, Come back when you have a REAL OS");
    perror("OS not liked by developer: Fix - Switch your OS, or use a VM");
    exit(1);
#endif
}

#endif //EXWIN_H
