#include "stdio.h"
#include "stdlib.h"

int add(int a, int b) {
    return a + b;
}


int main(int argc, char *argv[]) {
    char *p;
    
    printf("%d\n", argc);

    if (argc == 3)
        printf("%d\n", add(strtol(argv[1], &p, 10), strtol(argv[2], &p, 10)));

    return 0;
}