#include <stdio.h>
#include <string.h>

struct student
{
    char id[10];
    char name[15];
    int score[3];
    double ave;
};

int main()
{
    FILE *fp = fopen("chengji.txt", "r");
    struct student stuinfo;

    if (fp == NULL)
    {
        printf("File open error!\n");
        return 1;
    }

    printf("id\tname\tsub1\tsub2\tsub3\taverage\n");

    while ((fscanf(fp, "%s %s %d %d %d", stuinfo.id, stuinfo.name, &stuinfo.score[0], &stuinfo.score[1], &stuinfo.score[2])) != EOF)
    {
        stuinfo.ave = (stuinfo.score[0] + stuinfo.score[1] + stuinfo.score[2]) / 3.0;
        printf("%s\t%s\t%d\t%d\t%d\t%.2f\n", stuinfo.id, stuinfo.name, stuinfo.score[0], stuinfo.score[1], stuinfo.score[2], stuinfo.ave);
    }

    fclose(fp);
    return 0;
}
