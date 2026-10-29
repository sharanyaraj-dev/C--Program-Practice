#include <stdio.h>

int main()
{ 
     int length, breadth, area;

     printf("Enter the length of rectangle:");
        scanf("%d", &length);

        printf("Enter the breadth of rectangle:");
        scanf("%d", &breadth);

     area = length * breadth;
         printf("Area = %d\n", area);
    return 0;
}