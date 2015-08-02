#include <stdio.h>

#define VER 2
#define SUB_VER 3


char *comment() {
    return "test3 complete";
}

int main() {
    printf("%d.%d : %s\n", VER, SUB_VER, comment());
}
