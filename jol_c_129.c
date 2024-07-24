// before
#include <stdio.h>

int main()
{
    int base = 0;
    int height = 0;
    float width = 0.0;
    char c;

    while (1)
    {

        scanf("%d", &base);
        scanf("%d", &height);

        printf("Base = %d \n", base);
        printf("Height = %d \n", height);

        width = base * height;
        printf("Triangle width = %.1f \n", width * 0.5);

        scanf("%c", &c);
        printf("Continue? ");

        if (c == 'Y' || c == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}

// after

#include <stdio.h>

int main()
{
    int base = 0;
    int height = 0;
    float width = 0.0;
    char c;
    
    while (1)
    {
        scanf_s("%d", &base);
        scanf_s("%d", &height);

        printf("Base = %d \n", base);
        printf("Height = %d \n", height);
       
        width = base * height;
        printf("Triangle width = %.1f \n", width * 0.5);

        while ((getchar()) != '\n');

        printf("Continue? ");
        scanf_s("%c", &c);

        if (c == 'Y' || c == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}
