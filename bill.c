#include <stdio.h>

void menu()
{
    printf("\n========== RESTAURANT MENU ==========\n");
    printf("1. Burger          Rs.120\n");
    printf("2. Pizza           Rs.250\n");
    printf("3. Sandwich        Rs.90\n");
    printf("4. French Fries    Rs.80\n");
    printf("5. Cold Drink      Rs.40\n");
    printf("6. Generate Bill\n");
    printf("=====================================\n");
}

int main()
{
    int choice, qty;

    int burger = 0, pizza = 0, sandwich = 0, fries = 0, drink = 0;

    while(1)
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice == 6)
            break;

        printf("Enter Quantity: ");
        scanf("%d",&qty);

        switch(choice)
        {
            case 1:
                burger += qty;
                break;

            case 2:
                pizza += qty;
                break;

            case 3:
                sandwich += qty;
                break;

            case 4:
                fries += qty;
                break;

            case 5:
                drink += qty;
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    int total = 0;

    printf("\n\n========== FINAL BILL ==========\n");
    printf("------------------------------------------\n");
    printf("Item\t\tQty\tAmount\n");
    printf("------------------------------------------\n");

    if(burger > 0)
    {
        printf("Burger\t\t%d\t%d\n", burger, burger*120);
        total += burger*120;
    }

    if(pizza > 0)
    {
        printf("Pizza\t\t%d\t%d\n", pizza, pizza*250);
        total += pizza*250;
    }

    if(sandwich > 0)
    {
        printf("Sandwich\t%d\t%d\n", sandwich, sandwich*90);
        total += sandwich*90;
    }

    if(fries > 0)
    {
        printf("Fries\t\t%d\t%d\n", fries, fries*80);
        total += fries*80;
    }

    if(drink > 0)
    {
        printf("Cold Drink\t%d\t%d\n", drink, drink*40);
        total += drink*40;
    }

    printf("------------------------------------------\n");
    printf("Total Amount : Rs.%d\n", total);
    printf("------------------------------------------\n");
    printf("Thank You! Visit Again.\n");

    return 0;
}