#include<stdio.h>


int main(){
    char a[55];
    int n;
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        printf("%c",(a[i]+n-'a')%26+'a');

    }


    return 0;
}