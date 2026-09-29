#include<stdio.h>

int IsZishou(int n){
    int m = 10,t=n*n;
    while (m <= n) m *= 10;
    if(t % m == n) return 1;
    else return 0;      
    

}



int main(){
    int l,r,flag=0;
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++){
        if( IsZishou(i) ){
            printf("%d ",i);
            flag=1;
        } 
        
    }
    if(flag==0) printf("None");


    return 0;
}