#include <stdio.h>

int main() {
    int n;
    char s[100005];
    
    scanf("%d", &n);
    scanf("%s", s);
    
    int ans = 1; 
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            ans++;
        }
    }
    
    printf("%d", ans);
    return 0;
}
