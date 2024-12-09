#include <stdio.h>

struct test {
    char name[20];
    int *ptr_mem;
};

int main(){
    struct test t;
    int y = 10;
    t.name[0] = 'a';
    t.ptr_mem = &y;
    printf("%c %d", t.name[0], *t.ptr_mem);
    return 0;
}