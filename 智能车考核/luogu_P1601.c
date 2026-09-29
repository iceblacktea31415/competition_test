#include<stdio.h>
#include<string.h>


int main(){
    char a[505],b[505];
    char ans[505];
    scanf("%s%s",a,b);
    int i=strlen(a)-1;
    int j=strlen(b)-1;
    int k=0;
    int save=0;//进位
    while(i>=0||j>=0||save>0){
        int cal1,cal2;
        if(i>=0){
            cal1=a[i]-'0';
        }
        else{
            cal1=0;
        }
        if(j>=0){
            cal2=b[j]-'0';
        }
        else{
            cal2=0;
        }
        ans[k]=(cal1+cal2+save)%10;
        save=(cal1+cal2+save)/10;
        k++;
        i--;
        j--;


    }
    for(int ind=k-1;ind>=0;ind--){
        printf("%d",ans[ind]);
    }





    return 0;
}