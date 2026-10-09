int main(){
    char a[1005];
    scanf("%s",a);
    for(int i=0;i<strlen(a);){
        int cnt=1;
        for(int j=i+1;a[j]==a[j-1];j++){
            cnt++;
        }
        //printf("%d\n",cnt);
        if(cnt!=1){
            printf("%d%c",cnt,a[i]);
        }
        else{
            printf("%c",a[i]);
        }
        i=i+cnt;
        //printf("\ni=%d\n",i);
    }



    return 0;
}