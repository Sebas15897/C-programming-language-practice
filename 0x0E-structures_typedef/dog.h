#ifndef STRUCT_H
#define STRUCT_H
/**
 * struct dog - My first structure about dogs and owners.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 * Desciption: Struct that define type of variables.
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* STRUCT_H */
