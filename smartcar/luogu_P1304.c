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
    int n;
    scanf("%d",&n);
    for(int i=4;i<=n;i+=2){
        for(int j=2;j*2<=i;j++){
            if(IsPrime(j) && IsPrime(i-j)){
                printf("%d=%d+%d\n",i,j,i-j);
                break;
            }
        }


    }


    return 0;
}