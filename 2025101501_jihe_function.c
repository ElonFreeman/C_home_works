<<<<<<< HEAD
#include <stdio.h>
#define PI 3.1415926535  //¶¨Òå³£Á¿PI

int main()

{
    float r,h;  //¶¨ÒåÊäÈëÁ¿
    float C,S,S_skin_ball,V_ball,V_cylinder;  //¶¨ÒåÊä³öÁ¿

    printf("Input r:");
    scanf("%f",&r);  //ÊäÈë°ë¾¶£¬ÒÔ¸¡µãÊıĞÎÊ½
    
    printf("\nInput h:");
    scanf("%f",&h);  //ÊäÈë¸ß£¬ÒÔ¸¡µãÊıĞÎÊ½

    C=2*PI*r;  //¼ÆËã¸÷Ïî
    S=PI*r*r;
    S_skin_ball=4*PI*r*r;
    V_ball=4.0/3*PI*r*r*r;
    V_cylinder=PI*r*r*h;

    printf("\nÔ²ÖÜ³¤£º%f\n",C);  //Êä³ö¼ÆËã½á¹û
    printf("Ô²Ãæ»ı£º%f\n",S);
    printf("Çò±íÃæ»ı£º%f\n",S_skin_ball);
    printf("ÇòÌå»ı£º%f\n",V_ball);
    printf("Ô²ÖùÌåÌå»ı£º%f\n",V_cylinder);


   /*printf("                        *           *\n");  //»ùÓÚVS Code×Ô¶¯²¹È«¹¦ÄÜ»æÖÆ
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
    

    printf("                        *           *\n");  //¼ÇÊÂ±¾¹¤¾ßÊÖ»æ
    printf("                   *      *     *       *\n");
    printf("                   *         *           *\n");
    printf("                     *                  *\n");
    printf("                        *             *\n");
    printf("                           *        *\n");
    printf("                              *   *\n");
    printf("                                *\n");*/

    getchar();

    return 0;
}
=======
#include <stdio.h>
#define PI 3.1415926535  //å®šä¹‰å¸¸é‡PI

int main()

{
    float r,h;  //å®šä¹‰è¾“å…¥é‡
    float C,S,S_skin_ball,V_ball,V_cylinder;  //å®šä¹‰è¾“å‡ºé‡

    printf("Input r:");
    scanf("%f",&r);  //è¾“å…¥åŠå¾„ï¼Œä»¥æµ®ç‚¹æ•°å½¢å¼
    
    printf("\nInput h:");
    scanf("%f",&h);  //è¾“å…¥é«˜ï¼Œä»¥æµ®ç‚¹æ•°å½¢å¼

    C=2*PI*r;  //è®¡ç®—å„é¡¹
    S=PI*r*r;
    S_skin_ball=4*PI*r*r;
    V_ball=4.0/3*PI*r*r*r;
    V_cylinder=PI*r*r*h;

    printf("\nåœ†å‘¨é•¿ï¼š%f\n",C);  //è¾“å‡ºè®¡ç®—ç»“æœ
    printf("åœ†é¢ç§¯ï¼š%f\n",S);
    printf("çƒè¡¨é¢ç§¯ï¼š%f\n",S_skin_ball);
    printf("çƒä½“ç§¯ï¼š%f\n",V_ball);
    printf("åœ†æŸ±ä½“ä½“ç§¯ï¼š%f\n",V_cylinder);


    printf("                        *           *\n");  //åŸºäºVS Codeè‡ªåŠ¨è¡¥å…¨åŠŸèƒ½ç»˜åˆ¶
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
    

    printf("                        *           *\n");  //è®°äº‹æœ¬å·¥å…·æ‰‹ç»˜
    printf("                   *      *     *       *\n");
    printf("                   *         *           *\n");
    printf("                     *                  *\n");
    printf("                        *             *\n");
    printf("                           *        *\n");
    printf("                              *   *\n");
    printf("                                *\n");
    
    return 0;
}
>>>>>>> 1a2c70149052257344836899d0c6f68f83854e8b
