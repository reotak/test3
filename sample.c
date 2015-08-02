#include <stdio.h>

#define VER 2
#define SUB_VER 2


char *comment() {
    return "test3 develop started!!!";
}

int main() {
    printf("%d.%d : %s\n", VER, SUB_VER, comment());
}
