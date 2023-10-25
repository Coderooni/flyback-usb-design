#include "stdio.h"
#include "stdlib.h"

// Oh, I forgot to add comments to my file
int add(int a, int d) {
    return a + d;
}

// Subtract
int sub(int a, int b) {
    return a - b;
}

// You also forgot to add comments to this part, ya dummy
int main(int argc, char *argv[]) {
    char *p;
    
    printf("%d\n", argc);

    if (argc == 3) {
        printf("%d\n", add(strtol(argv[1], &p, 10), strtol(argv[2], &p, 10)));
        printf("%d\n", add(strtol(argv[1], &p, 10), strtol(argv[2], &p, 10)));
    }
    return 0;
}