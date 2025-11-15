#include <stdio.h>



int main()
{
    char strings;
    int letters=0,space=0,nums=0,other=0;
    
    while((strings=getchar())!='\n')

    {

        if((strings>='A'&&strings<='Z')||(strings>='a'&&strings<='z'))

        {

            letters++;

        }

        else if(strings==' ')

        {
            space++;
        }

        else if((strings>='0'&&strings<='9'))

        {

            nums++;

        }

        else

        {

            other++;

        }

    }

    printf("letters:%d\n",letters);

    printf("space:%d\n",space);

    printf("nums:%d\n",nums);

    printf("other:%d\n",other);

    return 0;

}

