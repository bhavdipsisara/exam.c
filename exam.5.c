#include <stdio.h>


struct Laptop
{
    char company_name[100];
    char processor[50];
    char price[50];
};

int main()
{
    int n;
    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    
    struct Laptop laptops[n];

    
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Laptop %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", laptops[i].company_name);
        printf("Genre: ");
        scanf(" %[^\n]s", laptops[i].processor);
        printf("Language: ");
        scanf(" %[^\n]s", laptops[i].price);
    }

    
    printf("\nDetails of %d Laptops:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", laptops[i].company_name);
        printf("Genre: %s\n", laptops[i].processor);
        printf("Language: %s\n", laptops[i].price);
    }

}