#include<stdio.h>
#include<math.h>

double cal(double a,double b,double c){
    double p=(a+b+c)/2;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;



}


int main(){
    double e1,e2,e3,e4,e5,e6;
    scanf("%lf%lf%lf%lf%lf%lf",&e1,&e2,&e3,&e4,&e5,&e6);
    printf("%.2f",cal(e1,e2,e3)+cal(e1,e4,e5)+cal(e2,e4,e6)+cal(e3,e5,e6));



    return 0;
}
