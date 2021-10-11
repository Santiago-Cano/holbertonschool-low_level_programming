#include "hash_tables.h"

/**
 * key_index - Returns index for a specified key using the hash_djb2 function
 * @key: Key to find index to be stored in
 * @size: Size of hash table
 * Return: Index of specified key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key) % size;

	return (hash);
}
