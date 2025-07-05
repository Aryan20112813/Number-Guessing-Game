#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int num = rand()%100+1;
    printf("The random number is %d\n", num);
    int guess,nguess=0;
    do
    {
        printf("Enter your guess : \n");
        scanf("%d",&guess);
        if (guess < num)
        {
            printf("Guess Higher!!\n");
        }
        else if (guess > num)
        {
            printf("Guess Lower!!\n");
        }
        nguess++;
    } while (num!=guess);
    printf("Congratulations!! You guessed the number in %d guesses.",nguess);
    return 0;
}