#include <stdio.h>

void rectangle(){
    double area;
    int w, h;
    printf("enter width = ");
    scanf("%d", &w);
    printf("enter height = ");
    scanf("%d", &h);
    area = w * h;
    printf("rectangle area = %.2f\n",area);

}

void triangle(){
    double area;
    int b, h;
    printf("enter base = ");
    scanf("%d", &b);
    printf("enter height = ");
    scanf("%d", &h);
    area = (b * h)/2;
    printf("triangle area = %.2f\n",area);

}

void circle(){
    double area;
    int r;
    printf("enter radius = ");
    scanf("%d", &r);
    area = 3.14*r*r;
    printf("circle area = %.2f\n",area);

}

double rect(double w,double h){
    double area;
    area = w*h;
    return area;
}
int main()
{
    //rectangle();
    //triangle();
    //circle();
    double w, h;
    printf("enter width = ");
    scanf("%lf", &w);
    printf("enter height = ");
    scanf("%lf", &h);
    printf("rectangle area = %.2f\n",rect(w,h));
  
    return 0;
}