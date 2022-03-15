Structures

A structure is a user defined data type available
in C that allows to combine data items of
different kinds.

Structure declaration

● You can define a structure in the global
scope of your program (outside of all your
functions, just like the functions
prototypes).
● You can declare elements of your structure
in its scope.

Typedef

The C programming language provides a
keyword called typedef, which you can use to
give a type, a new name.

After this type definition, the identifier ‘byte’
can be used as an abbreviation for the type
unsigned char, like in the example.

You can also use typedef with structures to
define a new data type.

Then use that data type to define structure
variables directly like in the example.Then use that data type to define structure variables directly like in the example.

Tasks

0. Poppy

Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *

1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type struct dog
-Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog
-Prototype: void print_dog(struct dog *d);
-Format: see example bellow
-You are allowed to use the standard library
-If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
-If d is NULL print nothing.

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type dog_t as a new name for the type struct dog.

4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.
-Prototype: dog_t *new_dog(char *name, float age, char *owner);
-You have to store a copy of name and owner
-Return NULL if the function fails

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.
-Prototype: void free_dog(dog_t *d);



