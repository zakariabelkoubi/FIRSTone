#include <stdio.h>
int main()
{
    //EXEMPLE-->CALCULATE THE AREA OF SHAPES
    //EXEMPLE-->RECTANGLE :
    printf("RECTANGLE\n");
    int width , height , area;
    //the width of rect
    printf("enter the width:");
    scanf("%d", &width);
    //the height of the rect
    printf("enter the height:");
    scanf("%d", &height);
    //the area of the rect
    area= width*height;
    printf("the area is %d\n" ,area);
    //EXEMPLE-->CIRCLE
    printf("CIRCLE\n");
    const float x=3.14;
    float y;
    float res;
    printf ("the constant value of radius of the circle is %f\n" , x);
    //THE AREA OF THE CIRCLE
    printf ("enter the half of radius circle\n");
    scanf("%f" , &y);
    //THE RESULT
    res = x*y*y;
    printf("the result is %.2f\n" , res);
    //EXEMPLE-->TRIANGLE
    printf("TRIANGLE\n");
    float z;
    float b;
    float resu;
    //THE HEIGHT OF THE BASE
    printf("enter the height of the base:\n");
    scanf("%f", &z);
    //THE HEIGHT OF THE TRIANGLE
    printf("enter the height of the triangle :\n");
    scanf("%f", &b);
    //THE RESULT
    resu=z*b*1/2;
    printf("the result is %.2f\n", resu);
    //EXERCICE-->RECT
    printf("RECT EXERCICE\n");
    int rectwidth=12;
    int rectheight=8;
    int rectarea;
    printf("the width is: %d\n" , rectwidth);
    printf("the height is: %d\n" , rectheight);
    printf("NOTE:width*height=area\n");
    printf("enter the enswer:");
    scanf("%d" , &rectarea);

    if (rectarea==96){
            printf("CORRECT\n");
    }
    else {
            printf("WRONG\n");
    }
    //EXERCICE-->CIRCLE
    printf("CIRCLE EXERCICE\n");
    const float redcircle=3.14;
    float h=6;
    int rs;
    printf("the constant value of radius of the circle is: %.2f\n" , redcircle);
    printf("the radius of the circle iS: %.2f\n" , h);
    printf("NOTE: 3.14*radius*radius=area\n");
    printf("enter the answer:");
    scanf("%d", &rs);
    if (rs==113){
        printf("CORRECT\n");
    } else {
        printf("WRONG\n");
    }
    //EXERCICE-->TRIANGLE
    printf(" TRIANGLE EXERCICE\n");
    int base=12;
    int trheight=6;
    int resarea;
    printf("the height of the base is: %d\n", base);
    printf("the height of the triangle is: %d\n",trheight);
    printf("NOTE: base height*triangle height*1/2=area\n");
    printf("enter the answer\n");
    scanf("%d" , &resarea);
    if (resarea==36){
        printf("CORRECT\n");
    }
    else {
        printf("WRONG\n");
    }
    //EXERCICE-->
    printf("TO CALACULATE THE RECT AREA WE USE :\n");
    int v;
    printf("width*height.1\n");
    printf("width+height.2\n");
    printf("width/height.3\n");
    printf("enter the number of the correct answer number:\n");
    scanf("%d" , &v);
    switch (v){
    case 1 : printf("CORRECT\n");
        break;
    case 2 : printf("WRONG\n");
        break;
    case 3 : printf("WRONG\n");
        break;
    default : printf("THIS NUMBER DOES NOT EXIST\n");
    }
    //EXERCICE
    printf("TO CALCULATE THE CIRCLE AREA WE USE:\n");
    int cir;
    printf("2.14*radius*radius.1\n");
    printf("3.14*radius*height\n");
    printf("3.14*radius*radius\n");
    printf("enter the number of the correct answer number:\n");
    scanf("%d" , &cir);
    switch (cir) {
    case 1 : printf("WRONG ANSWER\n");
        break;
    case 2 : printf("WRONG ANSWER\n");
        break;
    case 3 : printf("CORRECT ANSWER\n");
        break;
    default : printf("THIS NUMBER DOES NOT EXIST\n");
    }
    //EXERCICE
    printf("TO CALCULATE THE TRIANGLE AREA WE USE:\n");
    int tria;
    printf("height*triangle height =>1\n");
    printf("base height*triangle height*1/2 =>2\n");
    printf("base height*triangle width*1/2 =>3\n");
    printf("enter the number of the correct answer number:\n");
    scanf("%d" , &tria);
    switch (tria) {
    case 1 : printf("WRONG ANSWER\n");
        break;
    case 2 : printf("CORRECCT ANSWER\n");
        break;
    case 3 : printf("WRONG ANSWER\n");
        break;
    default : printf("THIS NUMBER DOES NOT EXIST\n");
    }



    return 0;
}
