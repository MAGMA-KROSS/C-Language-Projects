#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int gussed_no;
    int no_of_guesses = 0;
    do
    {
        printf("Guess the no:\n");
        scanf("%d", &gussed_no);

        if (gussed_no > randomNumber)
        {
            printf("Guess lower\n");
        }
        else if (gussed_no < randomNumber)
        {
            printf("Guess higher\n");
        }
        else
        {
            printf("  CCCCC   OOOOO  N   N  GGGGG  RRRRR    AAAAA  TTTTT  SSSSS     Y   Y  OOOOO  U   U     GGGGG  U   U  EEEEE  SSSSS  SSSSS  EEEEE  DDDD     I  TTTTT\n");
            printf(" C       O     O NN  N  G      R   R   A     A   T   S          Y Y  O     O U   U    G       U   U  E      S      S      E      D   D     I    T\n");
            printf(" C       O     O N N N  G  GGG RRRRR   AAAAAAA   T    SSS        Y   O     O U   U    G  GGG  U   U  EEEE    SSS     SSS   EEEE   D   D    I    T\n");
            printf(" C       O     O N  NN  G    G R   R   A     A   T       S       Y   O     O U   U    G    G  U   U  E          S      S  E      D   D     I    T\n");
            printf("  CCCCC   OOOOO  N   N   GGGGG R   R   A     A   T   SSSSS       Y    OOOOO   UUU      GGGGG   UUU   EEEEE  SSSSS  SSSSS  EEEEE  DDDD      I    T\n");
        }

        no_of_guesses++;

    } while (gussed_no != randomNumber);

    printf("No of guess took : %d", no_of_guesses);

    return 0;
}
