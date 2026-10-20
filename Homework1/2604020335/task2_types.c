/*
 * 学号：2604020335
 * 姓名：钟宇轩
 * 题目：Homework1 - 题目2 基本数据类型演示
 * 编译：gcc -Wall -std=c11 task2_types.c -o task2_types
 */

#include <stdio.h>

int main()
{
    int    age       = 19;                 /* 年龄 */
    float  height    = 1.75f;              /* 身高（米） */
    double pi        = 3.14159265358979;   /* 圆周率 */
    char   bloodType = 'A';                /* 血型 */

    printf("%-8s%-9s= %d\n", "int", "age", age);
    printf("%-8s%-9s= %f\n", "float", "height", height);
    printf("%-8s%-9s= %lf\n", "double", "pi", pi);
    printf("%-8s%-9s= %c\n", "char", "blood", bloodType);

    return 0;
}
