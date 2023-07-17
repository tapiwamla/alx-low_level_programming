#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free mem allocated for struct dog
* @d: pointer to the struct dog
*/

void free_dog(dog_t *d)
{

if (d)
{
free(d->name);
free(d->owner);
free(d);
}

}
