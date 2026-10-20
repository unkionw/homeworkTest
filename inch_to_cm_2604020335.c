#include <stdio.h>
int main()
{
    // 1英寸 = 2.54厘米，保留2位小数，逐行printf，不用循环
    printf("1 inch = %5.2f cm\n", 1 * 2.54);
    printf("2 inch = %5.2f cm\n", 2 * 2.54);
    printf("3 inch = %5.2f cm\n", 3 * 2.54);
    printf("4 inch = %5.2f cm\n", 4 * 2.54);
    printf("5 inch = %5.2f cm\n", 5 * 2.54);
    return 0;
}