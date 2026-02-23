#include <stdio.h>
int main(){
    int x,*px;
    double y,*py;
    px=&x;
    py=&y;
    printf("px=%p,py=%p\n",px,py);
    px=px+3;
    py--;
    printf("px=%p,py=%p\n",px,py);
return 0;
}
