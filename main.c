#include <stdio.h>

void func_to_git(const char* name);

int main() {
    printf("Hello, World!\n");
    return 0;
}

void func_to_git(const char* name) {
    printf("%S", name);
}
