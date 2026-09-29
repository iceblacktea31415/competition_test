#include<stdio.h>



int main(){
    char a[105][105]={0};
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }*/
   int dx[8]={-1,-1,-1,0,0,1,1,1};
   int dy[8]={-1,0,1,-1,1,-1,0,1};
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='*'){
                printf("*");
            }else{
                int cnt=0;
                for(int k=0;k<8;k++){
                    int x=i+dx[k],y=j+dy[k];
                    if(x>=0&&x<n&&y>=0&&y<m&&a[x][y]=='*'){
                        cnt++;
                    }
                }
                printf("%d",cnt);
            }
        }
        printf("\n");
    }

    return 0;
}