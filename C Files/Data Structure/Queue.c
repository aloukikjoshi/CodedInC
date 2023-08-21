// queue data structure in C
#include <stdio.h>
void ENQUEUE(int RE, int FE, int size);
int DEQUEUE(int RE, int FE, int size);
int main()
{
    int data, FE = -1, RE = -1, size, choice;
    int Queue[size];
    printf("Enter the size of the queue:-\n");
    scanf("%d", &size);
    printf("--Queue operations using arrays--\n");
    printf("1.ENQUEUE(Insertion)\t\t\t\t2.DEQUEUE(Deletion)\n3.EXIT(Exits the program)");
    while (1)
    {
        printf("\nEnter your choice:-\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            ENQUEUE(FE, RE, size);
            break;
        }
        case 2:
        {
            DEQUEUE(FE, RE, size);
            break;
        }
        case 3:
        {
            printf("Exiting the queue operations.......\n");
        }
        default:
            break;
        }
    }
    return 0;
}

void ENQUEUE(int FE, int RE, int size)
{
    int data, QUEUE[size];
    if (RE == size - 1)
    {
        printf("Queue overflowed!");
    }
    else if (FE == -1 && RE == -1)
    {
        FE++;
        RE++;
        printf("Enter the data to be inserted:-\n");
        scanf("%d", &data);
        QUEUE[RE] = data;
    }
    else
    {
        FE++;
        QUEUE[RE] = data;
    }
}

int DEQUEUE(int FE, int RE, int size)
{
    int data, QUEUE[size];
    if (FE == size - 1)
    {
        data = QUEUE[FE];
        FE = -1;
        return data;
    }
    else if (FE != -1 || FE > RE)
    {
        data = QUEUE[FE];
        FE++;
        return data;
    }
    else
    {
        printf("Queue underflowed.");
    }
}