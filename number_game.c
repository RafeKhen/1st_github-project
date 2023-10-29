/*Author: Rafiul Islam
Idea from codewithharry youtube harry bhai
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;  //generate random number between 1-100
    // printf("The number is %d\n", number);
    //keep running the loop until it guessed
    do
    {
            printf("Guess the number between 1-100 : ");
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Lower number please!\n");
            }
            else if (guess < number)
            {
                printf("Higher number please!\n");
                 
            }
            else {
                printf("You have guessed it in %d attermps", nguesses);
            }
            nguesses++;
            
    } while (guess != number);
    
return 0;
}