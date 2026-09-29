#include<stdio.h>

/*int accmulate(int n){
    int ans;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}*/

int main(){
    /*int a[1005];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){

        }


        printf("\n");
    }*/
   int a[25][25]={0};
   a[1][1]=1;
   a[2][1]=1,a[2][2]=1;
   printf("%d\n",a[1][1]);
   int n;
   scanf("%d",&n);
   for(int i=3;i<=20;i++){
        for(int j=1;j<=i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
   }
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
   }


    return 0;
}