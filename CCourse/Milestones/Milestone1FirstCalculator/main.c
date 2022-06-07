#include <stdio.h>
#include <stdlib.h>

/*
This is the first milestone from the C course I'm taking on Udemy. It goes over printing and formatting strings with integers and floats.
*/

int main()
{
    printf("%d + %d = %d\n", 491, 312, 491+312);
    printf("%d - %d = %d\n", 49, 17, 49-17);
    printf("%d * %d = %d\n", 13, 13, 13*13);
    printf("%.1f / %.0f = %.2 f\n", 12.5, 2.0, 12.5 / 2);
    printf("%d %% %d = %d\n", 5, 3, 5%3);
    return 0;
}
