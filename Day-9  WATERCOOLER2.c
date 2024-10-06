#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T); // Read the number of test cases
    for (int i = 0; i < T; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read X and Y for each test case
        
        // Calculate how many full segments of size X fit into (1 to Y-1)
        int M = (Y - 1) / X; 
        
        // Output the result
        if (M < 1)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", M);
        }
    }
    return 0;
}
