#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner the dog
 * Return: info
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
