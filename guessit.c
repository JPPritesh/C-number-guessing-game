#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int score = 0;
    srand(time(NULL));
    int p = 0;
    int guesses=0;


    int x = rand() % 10 + 1;



    do
    {
     p = get_int("choose a number from 1 to 10\n");
      guesses++;

    if ( p ==  x)
    {
        printf("Computer: Correct!\n");

    }


    else if( p > x )
    {
        printf("Computer: Too high!\n");

    }
    else
       {printf("Computer: Too Low!\n");}

}

while ( p != x)
;


printf("you have guessed it in just %i tries\n",guesses);

score = (1000.0/9.0)*((1.0/guesses)- 1.0/10.0);
printf("your score is %i!\n",score);
}


