#include <stdio.h>
#define PI 3.1415926535  //定义常量PI

int main()

{
    float r,h;  //定义输入量
    float C,S,S_skin_ball,V_ball,V_cylinder;  //定义输出量

    printf("Input r:");
    scanf("%f",&r);  //输入半径，以浮点数形式
    
    printf("\nInput h:");
    scanf("%f",&h);  //输入高，以浮点数形式

    C=2*PI*r;  //计算各项
    S=PI*r*r;
    S_skin_ball=4*PI*r*r;
    V_ball=4.0/3*PI*r*r*r;
    V_cylinder=PI*r*r*h;

    printf("\n圆周长：%f\n",C);  //输出计算结果
    printf("圆面积：%f\n",S);
    printf("球表面积：%f\n",S_skin_ball);
    printf("球体积：%f\n",V_ball);
    printf("圆柱体体积：%f\n",V_cylinder);


    printf("                        *           *\n");  //基于VS Code自动补全功能绘制
    printf("                   *      *     *       *\n");
    printf("                *         *   *          *\n");
    printf("              *            * *             *\n");
    printf("             *              *               *\n");
    printf("             *                              *\n"); 
    printf("             *                              *\n");
    printf("             *                              *\n");
    printf("              *                            *\n");
    printf("                *                        *\n");
    printf("                   *                  *\n");
    printf("                        *          *\n");
    printf("                           *    *\n");
    printf("                             **\n");
    printf("\n");
    printf("\n");
    

    printf("                        *           *\n");  //记事本工具手绘
    printf("                   *      *     *       *\n");
    printf("                   *         *           *\n");
    printf("                     *                  *\n");
    printf("                        *             *\n");
    printf("                           *        *\n");
    printf("                              *   *\n");
    printf("                                *\n");
    
    return 0;
}