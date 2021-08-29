#include<stdio.h>

int pation(int sort[], int low, int high)
{
    int sn;
    sn = sort[low];
    sort[0] = sort[low];
    while (low < high)
    {
        while (low < high && sort[high] >= sn)
            high--;
        sort[low] = sort[high];
        while (low < high && sort[low] <= sn)
            low++;
        sort[high] = sort[low];
    }
    sort[low] = sort[0];
    return low;
}

void Qsort(int sort[], int low, int high)
{
    int locate;
    if (low < high)
    {
        locate = pation(sort, low, high);
        Qsort(sort, low, locate - 1);
        Qsort(sort, locate + 1, high);
    }
}

int main()
{
    int sort[100002] = { 0 }, n, i;
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf_s("%d", &sort[i]);
    }
    Qsort(sort, 1, n);
    for (i = 1; i <= n - 1; i++)
    {
        printf("%d ", sort[i]);
    }
    printf("%d", sort[i]);
}
