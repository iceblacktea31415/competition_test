#include<stdio.h>

int IsPrime(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}




int main(){
    char a[105];
    scanf("%s",a);
    int t[30]={0},maxn=0,minn=200;
    for(int i=0;a[i]!='\0';i++){
        t[a[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(t[i]>maxn){
            maxn=t[i];
        }
        if(t[i]<minn && t[i]!=0){
            minn=t[i];
        }
    }
    printf("%d %d\n",maxn,minn);
    if(IsPrime(maxn-minn)){
        printf("Lucky Word\n%d",maxn-minn);
    }
    else{
        printf("No Answer\n0");
    }



    return 0;
}