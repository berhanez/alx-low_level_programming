#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - new structure and type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner the dog
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/* Lets define the typedef */
typedef struct dog dog_struct;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */