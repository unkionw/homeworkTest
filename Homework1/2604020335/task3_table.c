/*
 * 学号：2604020335
 * 姓名：钟宇轩
 * 题目：Homework1 - 题目3 格式化输出练习
 * 编译：gcc -Wall -std=c11 task3_table.c -o task3_table
 */

#include <stdio.h>

int main()
{
    /* 中文占 2 列但按 3 字节算，%-12s 会少补空格，
       所以名称后面先补足空格，保证三列对齐 */
    printf("%6s %-12s %10s\n", "  编号", "名称        ", "      单价");
    printf("%6d %-12s %10.2f\n", 1, "铅笔        ", 1.50);
    printf("%6d %-12s %10.2f\n", 2, "笔记本      ", 5.80);
    printf("%6d %-12s %10.2f\n", 3, "橡皮        ", 0.75);
    printf("%6d %-12s %10.2f\n", 4, "圆规        ", 12.00);

    return 0;
}
