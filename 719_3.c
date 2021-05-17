#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void distracted(char string[], int n)
{
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            count[string[i] - 65]++;
        }
        else
        {
            if (string[i] != string[i - 1])
            count[string[i] - 65]++;
        }
        if (count[string[i] - 65] > 1)
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main()
{
    long int t;
    scanf("%ld", &t);
    for (long int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char string[n + 1];
        scanf("%s", string);
        // getchar();
        distracted(string, n);
    }
    return 0;
}