#include <stdio.h>

void stop()
{
    while (getchar() != '\n'); {}
    printf("\nPress any key to continue...");
    getchar();
}

int main()
{
    float faHeight,moHeight;
    float male_height,female_height;
    float bridge;
    char sex,sports,diet;


    printf("Enter your dad's height(In cm):");
    scanf("%f",&faHeight);
    stop();

    printf("\nEnter your mom's height(In cm):");
    scanf("%f",&moHeight);
    stop();

    printf("\nEnter your sex(F/M):");
    scanf("%c",&sex);
    stop();

    printf("\nDo you like sports(Y/N):");
    scanf("%c",&sports);
    stop();

    printf("\nHow is your deit(G/B):");
    scanf("%c",&diet);
    stop();


    {
        if(sex=='F')
        {
            bridge=female_height=((faHeight*0.923)+moHeight)/2;
        }

        else if(sex=='M')
        {
            bridge=male_height=(faHeight+moHeight)*0.54;
        }

        else
        {
            printf("You the fuck LGBTQ!");
        }
    }

    {
        if(sports=='Y')
        {
            bridge=bridge+bridge*0.02;
        }

        else
        {
            bridge=bridge;
        }

    }

    {
        if(diet=='G')
        {
            bridge=bridge+bridge*0.015;
        }
        else
        {
            bridge=bridge;
        }
    }

    printf("predict_height:%f",bridge);

    stop();

    return 0;
}