#include<stdio.h>

int main(){
    int t[1005]={0};
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        int a;
        scanf("%d", &a);
        t[a]++;
    }

    for(int i=1;i<=n;i++){
        while(t[i]>0){
            printf("%d ",i);
            t[i]--;
        }
    }

    return 0;
}
