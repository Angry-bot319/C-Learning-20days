#include <stdio.h>
#include <string.h>
int main(){
    char *lang[]={"C","C++","Java","Basic"};
    char **p;
    p=lang;
    while(p<lang+4)
    {
        puts(*p);
        p++;
    }
return 0;
}
