#include <stdio.h>

struct person {
    char name[20];
    int age;
};

int main (){
    struct person p[3] = {{"mike", 29}, {"heeralal", 30}, {"suresh", 31}};
    printf("%s %d", p[0].name, p[0].age);
    return 0;
}