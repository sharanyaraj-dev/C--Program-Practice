#include <stdio.h>
int main()
{
    char Name[100], College[100];
    int Age;

    printf("Enter you name:");
    scanf("%s", Name);
    printf("Enter your age:");
    scanf("%d", &Age);
    printf("Enter Your College name:");
    scanf("%s",College);

    printf("Name: %s, Age: %d, College: %s", Name, Age, College);

return 0;
}