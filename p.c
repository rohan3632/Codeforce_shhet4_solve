#include <stdio.h>
#include <ctype.h>

int main() {
    int c, inword = 0, count = 0;

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            if (!inword) {
                inword = 1;
                count++;
            }
        } else {
            inword = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}
