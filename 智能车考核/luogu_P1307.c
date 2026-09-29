#include<stdio.h>


int main(){
    int n,sign=1,ans=0;
    scanf("%d",&n);
    if(n<0){
        n=-1*n;
        sign=-1;
    }
    while(n!=0){
        ans=ans*10+n%10;
        n=n/10;
    }
    printf("%d",sign*ans);




    return 0;
}