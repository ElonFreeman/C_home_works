#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int proc(int *scores, float *valid, float *invalid, float aver)
{
    int j, k, tj = 0, tk = 0;

    for (int i = 0; i < 20; i++)
    {
        if (fabs((float)scores[i] - aver) > 10.0) // invalid
        {
            for (j = tj; j < 20; j++)
            {
                invalid[j] = scores[i];
                tj = j + 1;
                break;
            }
        }

        else if (fabs((float)scores[i] - aver) <= 10.0) // valid
        {
            for (k = tk; k < 20; k++)
            {
                valid[k] = scores[i];
                tk = k + 1;
                break;
            }
        }
    }

    return 0;
}

int main()
{
    int scores[20]; //= {86, 87, 83, 70, 99, 94, 78, 89, 86, 80,
                     //97, 84, 90, 87, 95, 87, 84, 99, 84, 95};
    float valid[20], invalid[20],aver, sum = 0;
    int count=0;
    // 86,87,83,70,99,94,78,89,86,80,97,84,90,87,95,87,84,99,84,95
    // 72,72,73,71,71,72,73,71,71,72,98,98,97,100,99,97,97,99,99,99
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&scores[i]);
        sum += (float)scores[i];
    }

    aver = sum / 20.0;
    printf("所有评委平均分:%.3f分.\n", aver);

    proc(scores, valid, invalid, aver);

    printf("不合格得分:");
    for(int i=0;i<20;i++)  //output invalid
    {
        if(invalid[i]>100||invalid[i]<0||invalid[i]<1)
        {
            break;
        }

        printf("%d ",(int)invalid[i]);
    }
    printf(".\n");

    sum=0;
    for(int i=0;i<20;i++)
    {
        if(valid[i]>100||valid[i]<0||valid[i]<1)
        {
            break;
        }

        sum+=valid[i];
        count=i;
    }

    if(sum==0)
    {
        printf("无合格打分.");
        return 0;
    }

    aver=0;
    aver=sum/(count+1);
    printf("最后得分:%.3f分.",aver);

    return 0;
}