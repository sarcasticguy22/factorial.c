#include<stdio.h>

    int main(){
    // fibbonaccio series
    int fibo(int a){
        int f;
        if((a==2)||(a==1)){
            f=1;
        }
        else {f= fibo(a-2) + fibo(a-1);}
        return f;
    }
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the %dth term of fibonacci series is %d",n,fibo(n));
return 0;
}
