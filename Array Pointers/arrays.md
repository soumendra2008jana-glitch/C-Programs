## Arrays Noting Points

`arr[2]` is a one dimentional array.

Where `arr` represents the name of array and also memory address of `0th` index of Array `arr`.

### Two Dimentional Array

When we are talking about two dimentional arrays that can be represented as `arr[2][3]`

```c
//      For two dimentional array :-
//      1. Array = Memory Location
//      2. Array[1] = Memory Location
//      3. Array[1][1] != Memory Location
//      4. Array[1][1] = Value at index [1][1]
```

**Sample Code**


```c
#include<stdio.h>
int main()
{
    int array[2][3] = {10,20,30,40,50,60};

    printf("Value at address %u is %d\n", array, *array);
    printf("Value at address %u is %d\n", array[0], *array[0]);
    printf("Value at address %u is %d\n", array[1], *array[1]);
    printf("Value at address %u is %d\n", &array[0][0], array[0][0]);
    printf("Value at address %u is %d\n", &array[0][1], array[0][1]);
    printf("Value at address %u is %d\n", &array[0][2], array[0][2]);
    printf("Value at address %u is %d\n", &array[1][0], array[1][0]);
    printf("Value at address %u is %d\n", &array[1][1], array[1][1]);
    printf("Value at address %u is %d\n", &array[1][2], array[1][2]);
}
```

**Output**

``` bash
Value at address 1486880144 is 1486880144
Value at address 1486880144 is 10
Value at address 1486880156 is 40
Value at address 1486880144 is 10
Value at address 1486880148 is 20
Value at address 1486880152 is 30
Value at address 1486880156 is 40
Value at address 1486880160 is 50
Value at address 1486880164 is 60
```