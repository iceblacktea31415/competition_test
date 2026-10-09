#include<stdio.h>
#include<string.h>


void subtract(char a[],char b[],char result[]){//a > b
    int borrow=0;//借位
    int ind=0;
    char tmp[105];//临时存放结果
    int j=strlen(b)-1;
    for(int i=strlen(a)-1;i>=0;i--){
        int na=a[i]-'0',nb=b[j]-'0';
        int n=na-nb-borrow;
        if(n<0){
            borrow=1;
            n+=10;
        }
        else borrow=0;
        tmp[ind++]=n+'0';
        j--;
    }
    ind--;
    while(ind>=0 && tmp[ind]=='0' ) ind--;
    for(int i=0;i<=ind;i++) result[i]=tmp[ind-i];
    result[ind+1]='\0';

}

void plus(char a[],char b[],char result[]){
    int save=0,ind=0;
    int len_a=strlen(a)-1,len_b=strlen(b)-1;
    char tmp[105];
    while(len_a>=0 || len_b>=0 || save>0){
        int cal_a,cal_b;
        if(len_a>=0) cal_a=a[len_a]-'0';
        else cal_a=0;
        if(len_b>=0) cal_b=b[len_b]-'0';
        else cal_b=0;
        int n=save+cal_a+cal_b;
        if(n>=10){
            save=1;
            n-=10;
        }
        else save=0;
        tmp[ind++]=n+'0';
        len_a--;
        len_b--;
    }
    ind--;
    for(int i=0;i<=ind;i++) result[i]=tmp[ind-i];
    result[ind+1]='\0';
}

void f(char a[],char result[]){//进行一次卡普雷卡过程
    int t[15]={0};

    for(int i=0;i<strlen(a);i++) t[a[i]-'0']++;

    char max[105];
    int ind=0;
    for(int i=9;i>=0;i--){
        for(int j=0;j<t[i];j++){
            max[ind++]=i+'0';
        }
    }
    max[ind]='\0';

    char min[105];
    ind=0;
    for(int i=0;i<=9;i++){
        for(int j=0;j<t[i];j++){
            min[ind++]=i+'0';
        }
    }
    min[ind]='\0';

    subtract(max,min,result);

}

void copy(char a[],char b[]){//将a赋给b
    for(int i=0;i<strlen(a);i++) b[i]=a[i];
    b[strlen(a)]='\0';
}

int main(){
    char m[105];
    char result[105];
    char save[25][105];//save[i]=第i次后得到的结果
    char sum[105];
    int k;
    scanf("%d %s",&k,m);
    copy(m,save[0]);
    copy(m,sum);
    for(int i=1;i<=k;i++){
        f(save[i-1],result);
        copy(result,save[i]);
        plus(sum,save[i],sum);
    }
    printf("%s\n%s",result,sum);

    return 0;
}