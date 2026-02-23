#include <stdio.h>
#define PI 3.14159
struct circle{
    int x;
    int y;
    double radius;
    double area;
};
struct circle getarea(struct circle c);
int main(){
    struct circle c1={0,0,12.5,0},c2;
    c2=getarea(c1);
    printf("c1:%d,%d,%.2f,%.2f\n",c1.x,c1.y,c1.radius,c1.area);
    printf("c2:%d,%d,%.2f,%.2f\n",c2.x,c2.y,c2.radius,c2.area);
return 0;
}
struct circle getarea(struct circle c){
    c.area=PI*c.radius*c.radius;
    return c;
}
