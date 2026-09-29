#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    if (n == 1) { 
        printf("%d", 1%m); 
        return 0; 
    }
    if (n == 2) { 
        printf("%d", 2%m); 
        return 0; 
    }

    long long a=1,b=2,c;

    for (int i=3;i<=n;i++) {
        c=(a+b)%m;   // 边算边取模，a 和 b 永远小于 m
        a=b;             // 窗口往后挪一格
        b=c;
    }

    printf("%lld",c);
    return 0;
}
