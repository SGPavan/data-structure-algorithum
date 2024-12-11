Pointer to struct

Declaration:

struct test {
  int s[10];
  long a;
};

struct test t1, *t2;
t1.a = 10;
t2 = &t1;
