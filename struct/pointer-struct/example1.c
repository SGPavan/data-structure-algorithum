#include <stdio.h>

struct person {
    char name[20];
    int age;
};

int main(){
    struct person p1={"sawan", 25}, *p2;
    p2 = &p1;
    printf("%s %d", p2->name, p2->age);
    return 0;
}

