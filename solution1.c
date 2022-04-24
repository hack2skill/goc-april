#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int counts[5] = {1, 1, 1, 1, 1};
    while (n > 1)
    {
        n -= 1;
        for (int i = 1; i < 5; i++)
            counts[i] += counts[i - 1];
    }
    printf("%d", counts[0] + counts[1] + counts[2] + counts[3] + counts[4]);
    return 0;
}
