#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    // printf("%d %d ", n, m);
    int a[n];
    int count[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}