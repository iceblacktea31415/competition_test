#include<stdio.h>



int main(){
    int n;
    scanf("%d",&n);
    int a[105][105]={0};
    int dir=1;//斜线走法
    int x=0,y=0;
    for(int i=1;i<=n*n;i++){
        a[x][y]=i;
        int nx,ny; //下一步走法
        if(dir==1) nx=x-1;
        else nx=x+1;
        if(dir==1) ny=y+1;
        else ny=y-1;
        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {//未越界
            x = nx;  y = ny;        
        }
        else{
            if(dir==1){//向右上走越界-->向右or向下
                if(ny==n) x++;
                else y++;
            }
            else{//向左下走越界-->向右or向下
                if(nx==n) y++;
                else x++;
            }
            dir=-dir;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }



    return 0;
}