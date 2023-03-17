README file for 0x0B-malloc_free
0-create_array.c - creates an array of chars, and initializes it with a specific char.
1-strdup.c - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2-str_concat.c - concatenates two strings.
3-alloc_grid.c - returns a pointer to a 2 dimensional array of integers.
4-free_grid.c - frees a 2 dimensional grid previously created by your alloc_grid function.

KEY_CONCEPTS

In computer science, the heap is a region of memory used for dynamic memory allocation. Unlike the stack, which is used for automatic memory allocation, the heap is used to allocate memory at runtime.

When a program needs to allocate memory on the heap, it makes a request to the operating system, which provides a block of memory. The program then uses this block of memory to store data and can resize it as needed. When the program is finished with the memory, it must explicitly release it back to the operating system, otherwise, the memory will remain allocated, which can cause memory leaks and potentially lead to crashes.

Heap memory is commonly used for dynamically allocated data structures, such as linked lists, trees, and arrays. It is also used for allocating memory for strings, images, and other large data structures. Because the heap is larger and more flexible than the stack, it allows programs to allocate memory dynamically at runtime, making it easier to work with complex data structures and larger datasets. However, it also requires more careful management to prevent memory leaks and other errors.