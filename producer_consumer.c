#include <stdio.h>
void wait(int x)
{
    if (x > 0)
    {
        x--;
    }
}
void signal(int x)
{
    x++;
}
int main()
{
    int a[3];
    int semaphore_empty = 3;
    int semaphore_full = 0;
    int semaphore_s = 1;
    int choice;
    while (1)
    {
        printf("Empty=%d\t full=%d\t semaphore=%d\n", semaphore_empty, semaphore_full, semaphore_s);
        printf("\n");
        printf("What do you want to perform? Produce or Consume! [Press 1 to Produce and 2 to Consume]:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (semaphore_empty != 0 && semaphore_s == 1)
            {
                printf("Enter product value:\n");
                wait(semaphore_empty);
                wait(semaphore_s);
                scanf("%d", &a[semaphore_full]);
                signal(semaphore_s);
                signal(semaphore_full);
            }
            else
            {
                printf("\n");
                printf("BUFFER IS FULL!!!");
            }
        }
        else if (choice == 2)
        {
            if (semaphore_full > 0 && semaphore_s == 1)
            {
                wait(semaphore_full);
                wait(semaphore_s);
                printf("Consumed product value is %d\n", a[semaphore_full]);
                signal(semaphore_s);
                signal(semaphore_empty);
            }
            else
            {
                printf("\n");
                printf("BUFFER IS EMPTY!!!");
            }
        }
        else
            break;
    }
    return 0;
}
