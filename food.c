#include <stdio.h>

main()
{
    printf("Pick an food item:\n1. Burger-100Rs\n2. Pizza-250Rs\n3. Momos-80Rs\n4. Noodles-90Rs");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {case 1:
    printf("Food item: Burger\nCost: 100Rs.");
    break;
    case 2:
    printf("Food item: Pizza\nCost: 250Rs.");
    break;
    case 3:
    printf("Food item: Momos\nCost: 80Rs.");
    break;
    case 4:
    printf("Food item: Noodles\nCost: 90Rs.");
    break;
    default : printf("Invalid choice");
    }
    
}
