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
    int n,ans=0;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(IsPrime(i)){
                ans=n/i;
                printf("%d",ans);
                break;
            }
        }
    }



    return 0;
}




