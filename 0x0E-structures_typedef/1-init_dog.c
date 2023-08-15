#include <stdlib.h>
#include "dog.h"
/**
 * Initializes a dog struct with the given name, age, and owner.
 *
 * @param d A pointer to the dog struct to initialize.
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}
