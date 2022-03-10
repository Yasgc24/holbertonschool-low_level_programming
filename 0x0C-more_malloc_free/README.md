0x0C. C - More malloc, free

Automatic and dynamic allocation, malloc and free

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

Tasks:

0. Trust no one

Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
-Returns a pointer to the allocated memory
-if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

1. string_nconcat

Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
-The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
-If the function fails, it should return NULL
-If n is greater or equal to the length of s2 then use the entire string s2
-if NULL is passed, treat it as an empty string

2. _calloc

Write a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
-The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
-The memory is set to zero
-If nmemb or size is 0, then _calloc returns NULL
-If malloc fails, then _calloc returns NULL
FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

3. array_range

Write a function that creates an array of integers.

Prototype: int *array_range(int min, int max);
-The array created should contain all the values from min (included) to max (included), ordered from min to max
-Return: the pointer to the newly created array
-If min > max, return NULL
-If malloc fails, return NULL
