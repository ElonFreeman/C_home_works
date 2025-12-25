#include <stdio.h>

// uptr
int uptri(int wh, int (*arr)[wh])
{
    int sum = 0;

    for (int i = 0; i < wh; i++)
    {
        for (int j = i; j < wh; j++)
        {
            sum += arr[i][j];
        }
    }

    return sum;
}

// dotr
int dotri(int wh, int (*arr)[wh])
{
    int sum = 0;

    for (int i = 0; i < wh; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += arr[i][j];
        }
    }

    return sum;
}

// main
int main()
{
    int wh2=5;
    int arr2[5][5]={{1,2,3,4,5,},{5,4,3,2,1},
                    {6,8,9,3,2},{5,8,7,2,1},
                    {9,7,8,6,5}};
    int sumup2, sumdown2;

    sumup2 = uptri(wh2, arr2);
    sumdown2 = dotri(wh2, arr2);
    printf("%d %d", sumup2, sumdown2);
    /*int wh;
    scanf("%d", &wh);
    int arr[wh][wh]; //={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < wh; i++)
    {
        for (int j = 0; j < wh; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumup, sumdown;

    sumup = uptri(wh, arr);
    sumdown = dotri(wh, arr);

    printf("%d %d", sumup, sumdown);*/

    return 0;
}