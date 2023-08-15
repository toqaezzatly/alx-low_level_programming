#include <stdlib.h>
#include "dogh"
/**
 * init_dog : initiates variable od type dog
 * @d: A pointer to the dog struct to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}
