#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to name of dog
 * @age: age of the dog
 * @owner: pointer to owner of dog
 * Return: info new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int named, ownerd, i;
dog_t *d1;

d1 = (dog_t *)malloc(sizeof(dog_t));
if (d1 == NULL)
return (NULL);
named = ownerd = 0;
while (name[named++])
;
while (owner[ownerd++])
;
d1->name = malloc(named *sizeof(d1->name));
if (d1->name == NULL)
{
free(d1);
return (NULL);
}
for (i = 0; i <= named; i++)
d1->name[i] = name[i];
d1->age = age;
d1->owner = malloc(ownerd * sizeof(d1->owner));
if (d1->owner == NULL)
{
free(d1->name);
free(d1);
return (NULL);
}
for (i = 0; i <= ownerd; i++)
d1->owner[i] = owner[i];
return (d1);
}
