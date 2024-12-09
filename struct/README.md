# Structure in C

## What is a structure?
Handling a group of related data.

## Declaration

### Method 1:
```c
struct employee {
    int id;
    char name;
    float salary;
};

struct employee e1, e2;
```

### Method 2 (Compact way):
```c
struct employee {
    int id;
    char name;
    float salary;
} e1, e2;
```

## Typedef

To give a custom name to a type.

### Example:
```c
typedef int dollars;
```

### Combined use of struct and typedef

#### Method 1:
```c
struct bk {
    int book_id;
    char title[50];
    char author[100];
};

typedef struct bk Books;

Books Book1, Book2;
```

#### Method 2 (Compact way):
```c
typedef struct bk {
    int book_id;
    char title[50];
    char author[100];
} Books;

Books Book1, Book2;
```

## Accessing the struct member

Use dot operator, the memory of member is consecutive.

```c
struct rec {
    int a[4];
    long i;
};

struct rec r1;
r1.i = 10;
```