#include <stdio.h>

int main() {
    char s[1000005];
    int c;

    int i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        s[i++] = (char)c;
    }
    s[i] = '\0';

    int n = i;
    int l = 0;

    while (l < n) {
        if (s[l] == ' ') {
            putchar(' ');
            l++;
        } else {
            int r = l;
            while (r < n && s[r] != ' ') r++;
            for (int k = r - 1; k >= l; k--) {
                putchar(s[k]);
            }
            l = r;
        }
    }

    return 0;
}
