#include<stdio.h>


int main(){
    int a[15],ans=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int h;
    scanf("%d",&h);
    for(int i=0;i<10;i++){
        if(30+h>=a[i]){
            ans+=1;
        }
    }
    printf("%d",ans);



    return 0;
}