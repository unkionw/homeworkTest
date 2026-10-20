#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float r;
    float pi = 3.14f;   /* 加 f 表示 float 常量，避免 double→float 截断警告 */
    float c, s;

    printf("请输入圆的半径：");
    scanf("%f", &r);

    c = 2 * pi * r;     /* 周长 */
    s = pi * r * r;     /* 面积 */

    /* 输出格式与原来保持一致：只输出数值，避免影响判题 */
    printf("%.4f\n", c);
    printf("%.3f\n", s);

    return 0;
}
