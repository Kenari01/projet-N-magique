#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
int random_number = rand() % 100 + 1;

int numb;


while (numb != random_number)
{
    
    printf("Choisissez un nombre entre 1 et 100 : \n");
    scanf("%d", &numb);

    if (numb < 0 || 100 < numb)
    {
        printf("Tu ne sais pas lire ?\n");
    }
    
    else if (numb < random_number)
    {
        printf("C'est plus !\n");
    }

    else if (numb > random_number)
    {
        printf("C'est moins !\n");
    }

}

if (numb == random_number)
{
    printf("Gagné !\n");
}

exit(0);

}