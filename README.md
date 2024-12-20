# Data Structure and Algorithm

## Time Complexity

Time complexity is the number of operations or steps taken to complete an algorithm.

- Calculate time complexity for the worst case.
- Avoid constants.
- Avoid lower values.

### Example:

```c
for(int i = 0; i < 5; i++) {
    printf("hello");
}
```

Time complexity = 5 x 3 = 15

## Space Complexity

Space complexity is the amount of memory space required.

1. **Auxiliary Space**: Space taken to solve the problem.
2. **Input Space**: Space to store the input.

Space complexity = Auxiliary Space + Input Space

### Example:

```c
int a = 1, b = 2;
int c = a + b;
```

- `a`, `b` -> Input space
- `c` -> Auxiliary space

Space complexity = 2 + 1 = 3

## Time and Space Complexity Notations

1. **Big-O**: Worst complexity / upper bound
2. **Theta (θ)**: Average complexity
3. **Omega (Ω)**: Best complexity / lower bound

### Example:

```c
for(int i = 0; i < N; i++) {
    printf("hello");
}
```

- Time complexity = O(N x 3)
- Space complexity = O(1)