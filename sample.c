#include <stdio.h>

#define VER 1
#define SUB_VER 4

char *comment() {
    return "test3 develop started!!!";
}

int main() {
    printf("%d.%d : %s\n", VER, SUB_VER, comment());
}
