#include "hash_tables.h"

/**
 * hash_table_create - create a hash table of size x
 * @size: size of array
 * Return: pointer to new hash table, NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable = NULL;

	if (size == 0)
		return (NULL);

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->array = calloc(size, sizeof(hash_node_t **));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	newtable->size = size;
	return (newtable);
}
