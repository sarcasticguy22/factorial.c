#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main(){
    int n;
    int guess;

    srand(time(0));
    guess = rand()%100 + 1;
    printf("%d",guess);
    for(int i=1; ;i++)
    {   printf("guess a number:\n");
        scanf("%d",&n);
        if(n>guess)
          { printf("lower number please\n");}
        else if(n<guess)
           {printf("higher number please\n");}
        else if(n==guess)
          { printf("correct!!\n");
          printf("you guessed it in %d guesses.",i);
           break;}
    }
return 0;
}
