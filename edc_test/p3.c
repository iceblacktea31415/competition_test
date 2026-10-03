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

    long long a=1,b=2,c=0;

    for (int i=3;i<=n;i++) {
        c=(a+b)%m;   
        a=b;             
        b=c;
    }

    printf("%lld",c);
    return 0;
}
