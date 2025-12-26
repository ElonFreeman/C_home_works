#include<stdio.h>

int *find(int *a,int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return (a+i);
        }
    }

    return NULL;
}


int main()
{
    int N;
    scanf_s("%d",&N);

    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    int X;
    scanf("%d",&X);

    int *f=find(a,N,X);

    if(f!=NULL)
    {
        printf("%d",(int)(f-a));
    }

    else if(f==NULL)
    {
        printf("NOT FOUND");
    }

    return 0;
}