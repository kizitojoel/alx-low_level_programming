#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - a dog structure
 * @name: type string
 * @age: type int
 * @owner: type string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*ifndef DOG_STRUCT*/
