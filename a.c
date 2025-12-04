#include <stdio.h>
#include <string.h>

int main() {
    char s[1005], t[1005];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    // remove newline if present
    s[strcspn(s, "\n")] = 0;
    t[strcspn(t, "\n")] = 0;

    printf("%lu %lu\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);

    return 0;
}
