#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - new structure and type
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

/* Task 3: Lets define a new type 'dog_t' as new name 
 * for struct dog with typedef 
 */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
