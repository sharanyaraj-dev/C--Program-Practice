#include <stdio.h>
int main()
{
    int a, b, c, Average;
    printf("Enter the 3 marks: ");
    scanf("%d%d%d", &a,&b,&c);
    Average = (a + b +c)/3;
    printf("Average of 3 marks = %d\n", Average);
    return 0;
}