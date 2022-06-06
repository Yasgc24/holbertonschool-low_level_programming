# 0x1A. C - Hash tables
***

![image](https://user-images.githubusercontent.com/98331961/172252044-7c44beb7-e5df-4544-b8d4-c70d335caa3d.png)

## General
***

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Requirements
***

### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded

## More Info
***

### Data Structures
Please use these data structures for this project:

      typedef struct hash_node_s
      {
           char *key;
           char *value;
           struct hash_node_s *next;
      } hash_node_t;

      typedef struct hash_table_s
      {
           unsigned long int size;
           hash_node_t **array;
      } hash_table_t;

## Tasks
***

#### 0. >>> ht = {}
Write a function that creates a hash table.
* Prototype: hash_table_t *hash_table_create(unsigned long int size);
  * where size is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return NULL

#### 1. djb2
Write a hash function implementing the djb2 algorithm.
* Prototype: unsigned long int hash_djb2(const unsigned char *str);
* You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

#### 2. key -> index
Write a function that gives you the index of a key.
* Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
  * where key is the key
  * and size is the size of the array of the hash table
* This function should use the hash_djb2 function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks

#### 3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.
* Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
  * Where ht is the hash table you want to add or update the key/value to
  * key is the key. key can not be an empty string
  * and value is the value associated with the key. value must be duplicated. value can be an empty string
* Returns: 1 if it succeeded, 0 otherwise
* In case of collision, add the new node at the beginning of the list

#### 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.
* Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
  * where ht is the hash table you want to look into
  * and key is the key you are looking for
* Returns the value associated with the element, or NULL if key couldn’t be found

#### 5. >>> print(ht)
Write a function that prints a hash table.
* Prototype: void hash_table_print(const hash_table_t *ht);
  * where ht is the hash table
* You should print the key/value in the order that they appear in the array of hash table
  * Order: array, list
* Format: see example
* If ht is NULL, don’t print anything

#### 6. >>> del ht
Write a function that deletes a hash table.
* Prototype: void hash_table_delete(hash_table_t *ht);
  * where ht is the hash table
