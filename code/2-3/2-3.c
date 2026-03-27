#include <stdio.h>
#include <string.h>

int main() {
    char a[64] = "Hello";
    char b[64] = "world";
    char c[128];

    size_t len = strlen(a);
    printf("length of a: %d\n", len);

    strcpy(c, b);
    printf("a: %s, c: %s\n", a, c);

    strcat(c, "World");
    printf("c: %s\n", c);

    printf("strcmp(%s, %s) = %d\n", a, a, strcmp("Hello", "Hello"));
    printf("strcmp(%s, %s) = %d\n", a, b, strcmp("Hello", "World"));

    return 0;
}
