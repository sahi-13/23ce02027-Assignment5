#include <stdio.h>
int main() 
{
int num, sum_even = 0;
char choice;
 while (1) 
 {
printf("\n Enter an integer: ");
        scanf("%d", &num);
        if (num % 2 == 0) 
        {
            sum_even+= num;
        }

        printf("\n Do you want to continue? ");
        printf("\n Enter Y or y for yes");
        printf("\n Enter N or n for no");
        printf("\n Enter your choice: ");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
         {
            continue;
        } 
        else if (choice == 'N' || choice == 'n') {
            break;
        } 
        else 
        {
            printf("\n Invalid choice");
        }
    }

    printf("\n Sum of even integers: %d", sum_even);

    return 0;
}