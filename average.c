#include<stdio.h>

    int main(){
    float avg(int a,int b,int c){
        int d;
        d= (a+b+c)/3;
        return d;
    }
    int A,B,C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    
    printf("%f",avg(A,B,C));
return 0;
}
