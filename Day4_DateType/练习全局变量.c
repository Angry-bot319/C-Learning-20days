#include <stdio.h>
int global_count=0;
void increment(){
    global_count++;
}

int main(){
    printf("初始:%d\n",global_count);
    increment();
    printf("调用后:%d\n",global_count);
return 0;
}
