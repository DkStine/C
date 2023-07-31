#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char player, char computer)
{
    // Case ==> Draw
    if (player == computer)
    {
        return 0;
    }

    // Other cases ==> rp, rs, ps,
    if (player == 'r' && computer == 'p')
    {
        return -1;
    }
    else if (player == 'p' && computer == 'r')
    {
        return 1;
    }
    if (player == 'r' && computer == 's')
    {
        return 1;
    }
    else if (player == 's' && computer == 'r')
    {
        return -1;
    }
    if (player == 'p' && computer == 's')
    {
        return -1;
    }
    else if (player == 's' && computer == 'p')
    {
        return 1;
    }
}

int main()
{
    char me, comp, choice;
    int rand_num, result, user_score = 0, comp_score = 0;

    srand(time(0));

    do
    {
        rand_num = (rand()%3) + 1;

        if (rand_num == 1)
        {
            comp = 'r';
        }
        if (rand_num == 2)
        {
            comp = 'p';
        }
        else
        {
            comp = 's';
        }
        printf("'r' --> rock, 'p' --> paper, 's' --> scissor: \n");
        scanf("%c", &me);
        fflush(stdin);

        result = rockpaperscissor(me, comp);
        printf("%d\n", result);

        user_score += result;
        comp_score += (-result);

        printf("Wish to continue[Y/y/N/n]: ");
        scanf("%c", &choice);
        fflush(stdin);
        
    } while (choice == 'y' || choice == 'Y');
    
    if (user_score > comp_score)
    {
        printf("You win and your score is %d, which is %d greater than the computer.", user_score, user_score - comp_score);
    }
    else if (comp_score > user_score)
    {
        printf("You lose and your score is %d, which is %d less than the computer.", user_score, comp_score - user_score);
    }
    else
    {
        printf("The match was drawed at %d all.", user_score);
    }

    return 0;
}