#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code
 * @name : name of dog
 * @owner: name of owner of dog
 * @age: dog is age
 *
 * Description: a struct dog code by c.
 */

struct dog
{
char *name;
float age;
char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
