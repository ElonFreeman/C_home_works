#include <stdio.h>
int main()
{   
   int rabbit,chikens;
   int total_head, total_foot;
   scanf("%d %d",&total_head,&total_foot);
   rabbit = (total_foot - 2 * total_head) / 2;
   chikens = total_head - rabbit;
   printf("%d%d\n",rabbit,chikens);
    return 0;
}