#include <stdio.h>

#define VER 2.1

char *comment() {
    return "test3 develop started!!!";
}

int main() {
    printf("%lf : %s\n", VER, comment());
}
