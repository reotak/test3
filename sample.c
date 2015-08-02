#include <stdio.h>

#define VER 1.1

char *comment() {
    return "test3 is created";
}

int main() {
    printf("%lf : %s\n", VER, comment());
}
