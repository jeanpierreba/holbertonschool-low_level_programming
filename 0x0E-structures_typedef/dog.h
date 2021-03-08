#ifndef dog_H
#define dog_H

/**
 * struct dog - dog's info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of dog struct
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
