#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int number,guess, nguesssed=1;
    srand(time(0));
    number=rand()%100;
    printf(" the Generated random number is %d \n",number);
    do
    {
        printf("Guess the number between 1 to 100! \n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number Please!\n");
        }
        else if (guess<number)
        {
            printf("Higher number Please\n");
        }
        else
        {
            printf("You guessed in %d attempt\n",nguesssed);
        }
        nguesssed++;
    } while (guess!=number);
    
    return 0;
}