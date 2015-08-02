#include <stdio.h>

#define VER 3
#define SUB_VER 0

char *comment() {
    return "test3 complete";
}

int main() {
    printf("%d.%d : %s\n", VER, SUB_VER, comment());
}
