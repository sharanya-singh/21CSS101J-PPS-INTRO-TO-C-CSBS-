#include <stdio.h>
int main()
{
    int i, start, end;
    printf("Enter starting value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);
    for(i=start; i>=end; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
