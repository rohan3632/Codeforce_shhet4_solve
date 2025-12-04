#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[55], t[55];
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%s %s", s, t);
        
        int len1 = strlen(s);
        int len2 = strlen(t);
        int m = len1 > len2 ? len1 : len2;
        
        for (int i = 0; i < m; i++) {
            if (i < len1) printf("%c", s[i]);
            if (i < len2) printf("%c", t[i]);
        }
        
        printf("\n");
    }
    
    return 0;
}
