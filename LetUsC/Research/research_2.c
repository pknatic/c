/* print ramanujan number with the help of while loop  */
// #include<stdio.h>
// int main()
// {
    

    
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i = 1;
//     int num, x, y, count;
//     int lmt = 30000;

//     printf("Ramanujan numbers are between 1 and %d:\n", lmt);

//     while (i <= lmt) {
//         count = 0;
//         x = 1;

//         while (x * x * x <= i) {
//             y = x;

//             while (x * x * x + y * y * y <= i) {
//                 if (x * x * x + y * y * y == i) {
//                     count++;
//                 }
//                 y++;
//             }
//             x++;
//         }

//         if (count == 2) {
//             int a = 1;
//             while (a <= i) {
//                 int b = a;

//                 while (b <= i) {
//                     if (a * a * a + b * b * b == i) {
//                         printf("(%d, %d) = %d\n", a, b, i);
//                     }
//                     b++;
//                 }
//                 a++;
//             }

//             printf("\n");
//         }

//         i++;
//     }

//     return 0;
// }







#include <stdio.h>

int main() {
    int i, num, x, y, count;
    int lmt = 30000;

    printf("Enter the limit: ");
    scanf("%d", &lmt);

    printf("Ramanujan numbers are between 1 and %d:\n", lmt);

    for (i = 1; i <= lmt; i++) {
        count = 0;
        x = 1;

        while (x * x * x <= i) {
            y = x;

            while (x * x * x + y * y * y <= i) {
                if (x * x * x + y * y * y == i) {
                    count++;
                }
                y++;
            }
            x++;
        }

        if (count == 2) {
            int a, b;
            printf("%d = ", i);
            a = 1;

            while (a <= i) {
                b = a;

                while (b <= i) {
                    if (a * a * a + b * b * b == i) {
                        printf("%d^3 + %d^3", a, b);

                        if (a * a * a + b * b * b != i)
                            printf(" = ");

                        count--;
                    }
                    b++;
                }
                a++;
            }

            printf("\n");

            if (count == 0)
                printf("\n");
        }
    }

    return 0;
}




// #include <stdio.h>

// int main() {
//     int i, num, x, y, count;
//     int lmt = 30000;

//     printf("Enter the limit: ");
//     scanf("%d", &lmt);

//     printf("Ramanujan numbers are between 1 and %d:\n", lmt);

//     for (i = 1; i <= lmt; i++) {
//         count = 0;
//         x = 1;

//         while (x * x * x <= i) {
//             y = x;

//             while (x * x * x + y * y * y <= i) {
//                 if (x * x * x + y * y * y == i) {
//                     count++;
//                 }
//                 y++;
//             }
//             x++;
//         }

//         if (count == 2) {
//             int a, b;
//             printf("%d = ", i);
//             a = 1;

//             while (a <= i) {
//                 b = a;

//                 while (b <= i) {
//                     if (a * a * a + b * b * b == i) {
//                         printf("%d^3 + %d^3", a, b);

//                         if (a * a * a + b * b * b != i)
//                             printf(" = ");

//                         count--;
//                     }
//                     b++;
//                 }
//                 a++;
//             }

//             printf("\n");

//             if (count == 0)
//                 printf("\n");
//         }
//     }

//     return 0;
// }
