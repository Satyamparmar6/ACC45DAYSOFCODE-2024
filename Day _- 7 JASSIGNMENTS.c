#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T); // Read the number of test cases
    for (int i = 0; i < T; i++)
    {
        int X;
        scanf("%d", &X); // Read the integer X
        if ((X + 3) <= 10)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
