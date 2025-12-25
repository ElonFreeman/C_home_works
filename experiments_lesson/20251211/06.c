#include <stdio.h>

int insert_array(int *array, int *num)
{
    int k, tmp;
    array[11] = *num;
    for (int i = 0; i < 11; i++)
    {
        k = i;
        for (int j = i + 1; j < 12; j++)
        {
            if (array[j] < array[k])
            {
                k = j;
            }
        }

        if (i != k) 
        {
            tmp = array[i];
            array[i] = array[k];
            array[k] = tmp;
        }
    }

    return 0;
}

int main()
{
    int array[11] = {1, 4, 6, 9, 11, 25, 31, 46, 83, 100}, num;

    printf("输入：");
    scanf("%d",&num);

    insert_array(array, &num);

    printf("输出：");
    for (int i = 0; i < 11; i++)
    {
        if (i == 10)
        {
            printf("%d", array[i]);
            break;
        }

        printf("%d ", array[i]);
    }

    return 0;
}