#include <stdio.h>
int main()
{
    int cold = 20 , normal = 25, hot= 30, temp;
    printf("Enter the temperature in Celcius: ");
    scanf("%d",&temp);
    if (temp== normal)
    {printf("The weather is moderate.");
    }
    else if (temp>=cold&&temp<normal)
    {printf("The temperature is cold.");
    }
    else if (temp>normal&&temp<=hot)
    {printf("The temperature is hot.");
    }
    else if (temp<cold)
    {printf("The temperature is extremely cold !");
    }
    else if (temp>hot)
    {printf("The temperature is extremely hot !");
    }
}