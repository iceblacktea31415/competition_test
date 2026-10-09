#include<stdio.h>
#include<string.h>

int mutiply(int a[],int len,int n){//高精度*低精度，返回高精度数组长度 ，a[]低位在前
    int save=0;
    for(int i=0;i<len;i++){
        int t=a[i]*n+save;
        a[i]=t%10;
        save=t/10;
    }
    while(save>0){
        a[len++]=save%10;//此处len多加了一位，指向末尾后一位
        save/=10;
    }

    return len;
}

void plus(char a[],char b[],char result[]){
    char tmp[105];
    int ind_a=strlen(a)-1,ind_b=strlen(b)-1,ind=0,save=0;
    while(ind_a>=0 || ind_b>=0 || save>0){
        int calc_a,calc_b;
        if(ind_a>=0) calc_a=a[ind_a]-'0';
        else calc_a=0;
        if(ind_b>=0) calc_b=b[ind_b]-'0';
        else calc_b=0;
        int n=calc_a+calc_b+save;
        tmp[ind++]=n%10;
        save=n/10;
        ind_a--;
        ind_b--;
    } 
    for(int i=0;i<ind;i++) result[i]=tmp[ind-i-1]+'0';
    result[ind]='\0';
}


int main(){
    int n;
    scanf("%d",&n);
    int len=1;
    char sum[200]={'0'};
    for(int i=1;i<=n;i++){
        int fact[200]={1};
        for(int j=1;j<=i;j++) len=mutiply(fact,len,j); 
        char tmp[200];
        for(int j=0;j<len;j++) tmp[j]=fact[len-j-1]+'0';
        tmp[len]='\0';

        plus(tmp,sum,sum);
    }
    printf("%s",sum);

    return 0;
}