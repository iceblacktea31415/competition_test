#include<stdio.h>

int IsLeapyear(int n){
    if((n%4==0&&n%100!=0) || n%400==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int x,y,ans=0,ind=0,year[105]={0};
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++){
        if(IsLeapyear(i)){
            ans++;
            year[ind]=i;
            ind++;
        }
    }
    printf("%d\n",ans);
    for(int i=0;year[i]!=0;i++){
        printf("%d ",year[i]);
    }



    return 0;
}