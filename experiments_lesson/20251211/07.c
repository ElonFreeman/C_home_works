#include <stdio.h>

int insertion_sort(int *array,int len)
{
    int i,j,key;
    for (i=1;i!=len;++i)
    {
        key = array[i];
        j=i-1;

        while((j>=0) && (array[j]>key))
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = key;
    }

    return 0;
}

int main()
{
    int nums;
    scanf("%d",&nums);

    int array[nums];
    for(int i=0;i<nums;i++)
    {
        scanf("%d",&array[i]);
    }

    insertion_sort(array,nums);

    for(int i=0;i<nums;i++)
    {
        if(i==nums-1)
        {
            printf("%d",array[i]);
            break;
        }
        printf("%d ",array[i]);
    }

    return 0;
}