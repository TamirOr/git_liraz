#include <stdio.h>

int func_to_git(const char* name);

int main() {
    printf("Hello, World!\n");
    return 0;
}

int func_to_git(const char* name) {
    printf("%S", name);
}
