#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog details
* @name: dog name, string
* @age: dog age, float
* @owner: owner, string
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
*dog_t - alias for struct dog
*/

typedef struct dog dog_t;

#endif
