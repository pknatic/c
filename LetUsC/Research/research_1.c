// /* Print all armstrong numbers between 1 to 500.  */
// #include <stdio.h>
// int main()
// {
//     int i,a,cube,b,c;
    
//         // a = i;
//         // cube = a*a*a;   
//         // if (cube == i)
//         // {
//         //     printf("%d\n",i);
//         // }
//         // a=0;
//         // cube =0;
//         i=1;
//         for(a=0;a<=9;a++)
//         {
//             for(b = a;b<=9;b++)
//             {
//                 for(c=b;c<= 9;c++)
//                 {
//                     if(a*a*a+b*b*b+c*c*c==i)
//                     {
//                         printf("Mission Success with %d%d%d\n",a,b,c);
//                     }
                    
//                 }
//             }
//             i++;
//             if(i==500)
//             break;
//         }
//         // printf("%d ",i);
//         // if (i==i*i*i)
//         // {
//         //     printf("%d\n",i);
//         // }
    
//     return 0;
// }







#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, sum, originalNum;

    printf("Armstrong numbers between 100 and 1000:\n");

    for (num = 100; num <= 1000; num++) {
        originalNum = num;
        sum = 0;

        while (originalNum != 0) {
            digit = originalNum % 10;
            sum += pow(digit, 3);
            originalNum /= 10;
        }

        if (num == sum) {
            printf("%d\n", num);
        }
    }

    return 0;
}
