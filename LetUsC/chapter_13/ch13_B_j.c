/*
A dequeue is an ordered set of elements in which elements may be inserted or retrieved from either end. using an array simulate a dequeue of characters and the operation retrieve left,retrieve right, insert left, insert right. Exceptional conditions such as dequeue full of empty should be reported. use two pointers left and right for this simulation.
*/
#include <stdio.h>
#define MAX 20
int i = 0;
int add_front(int *arr);
int main()
{
    static int arr[MAX];
    int option, loop=1;
    printf("Select Option From menu.");
    while (loop == 1)
    {
        printf("\n 1. Enter the element in Queue from front\n 2. Enter the element in Queue from end \n 3. Delete the element from front.\n 4. Delete the item from end. \n 5. Display the Dequeue. \n 6. Exit.\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            int auto a,temp; 
            add_front(arr+i);
            printf("%d",arr[i]);
            i++;
            break;
        }
        case 2:
        {
            printf(" We are in 1st case ");
            break;
        }
        case 3:
        {
            printf(" We are in 1st case ");
            break;
        }
        case 4:
        {
            printf(" We are in 1st case ");
            break;
        }
        case 5:
        {
            printf("[");
            for(int a = 0 ;a < i;a++)
            {
                printf("%d,",arr[a]);
            }
            printf("]");
            break;
        }
        case 6:
        {
            printf(" Nice to work with you Come Again  ");
            loop = 0;
            break;
        }
        default:
        {
            printf("You enterred wrong entry please enter a valid number");
            
        }
        }
    }
    return 0;
}
int add_front(int *p)
{
    printf("Enter the value You want to add  ");
    scanf("%d",p);
}

//Pending..........................................................................................