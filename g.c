#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ',') {
            putchar(' ');
        } else if (isupper(c)) {
            putchar(tolower(c));
        } else if (islower(c)) {
            putchar(toupper(c));
        } else {
            putchar(c);
        }
    }
    return 0;
}
