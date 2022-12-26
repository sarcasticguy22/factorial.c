#include<stdio.h>

    int main(){
    int i,n,fact;
   /* fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);  both are correct */

     fact=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);

return 0;
}
