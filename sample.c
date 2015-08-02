#include <stdio.h>

#define VER 2.0

char *comment() {
    return "test3 develop started";
}

int main() {
    printf("%lf : %s\n", VER, comment());
}
