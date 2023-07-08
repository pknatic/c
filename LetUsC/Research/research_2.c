// /* print ramanujan number with the help of while loop  */
// // #include<stdio.h>
// // int main()
// // {

// //     return 0;
// // }

// // #include <stdio.h>
// // int main() {
// //     int i = 1;
// //     int num, x, y, count;
// //     int lmt = 30000;

// //     printf("Ramanujan numbers are between 1 and %d:\n", lmt);

// //     while (i <= lmt) {
// //         count = 0;
// //         x = 1;

// //         while (x * x * x <= i) {
// //             y = x;

// //             while (x * x * x + y * y * y <= i) {
// //                 if (x * x * x + y * y * y == i) {
// //                     count++;
// //                 }
// //                 y++;
// //             }
// //             x++;
// //         }

// //         if (count == 2) {
// //             int a = 1;
// //             while (a <= i) {
// //                 int b = a;

// //                 while (b <= i) {
// //                     if (a * a * a + b * b * b == i) {
// //                         printf("(%d, %d) = %d\n", a, b, i);
// //                     }
// //                     b++;
// //                 }
// //                 a++;
// //             }

// //             printf("\n");
// //         }

// //         i++;
// //     }

// //     return 0;
// // }

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

// // #include <stdio.h>

// // int main() {
// //     int i, num, x, y, count;
// //     int lmt = 30000;

// //     printf("Enter the limit: ");
// //     scanf("%d", &lmt);

// //     printf("Ramanujan numbers are between 1 and %d:\n", lmt);

// //     for (i = 1; i <= lmt; i++) {
// //         count = 0;
// //         x = 1;

// //         while (x * x * x <= i) {
// //             y = x;

// //             while (x * x * x + y * y * y <= i) {
// //                 if (x * x * x + y * y * y == i) {
// //                     count++;
// //                 }
// //                 y++;
// //             }
// //             x++;
// //         }

// //         if (count == 2) {
// //             int a, b;
// //             printf("%d = ", i);
// //             a = 1;

// //             while (a <= i) {
// //                 b = a;

// //                 while (b <= i) {
// //                     if (a * a * a + b * b * b == i) {
// //                         printf("%d^3 + %d^3", a, b);

// //                         if (a * a * a + b * b * b != i)
// //                             printf(" = ");

// //                         count--;
// //                     }
// //                     b++;
// //                 }
// //                 a++;
// //             }

// //             printf("\n");

// //             if (count == 0)
// //                 printf("\n");
// //         }
// //     }

// //     return 0;
// // }

// #include<stdio.h>
// int main()
// {
//     int n;
//     int per = 1;
//     while(per == 1)
//     {
//         printf("Enter the number = ");
//         scanf("%d",&n);
//         printf("square of %d is %d \n",n,n*n);
//         printf("Do you want to enter more digits press 1 if yes = ");
//         // fflush(stdin);
//         // // per='y';
//         scanf("%d",&per);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     char per;
//     do
//     {
//         printf("Enter the number = ");
//         scanf("%d", &n);
//         printf("square of %d is %d \n", n, n * n);
//         printf("Do you want to enter more digits press y if yes = ");
//         scanf(" %c",&per);
//     } while (per == 'y');
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int number, square;
//     char choice;

//     do {
//         printf("Enter a number: ");
//         scanf("%d", &number);

//         square = number * number;
//         printf("Square: %d\n", square);

//         printf("Do you want to continue? (y/n): ");
//         scanf(" %c", &choice);

//     } while (choice == 'y' || choice == 'Y');

//     return 0;
// }


#include<stdio.h>
int main()
{
    int x = 25,y;
    y = sqrt(x);
    printf("%d",y);
    return 0;
}