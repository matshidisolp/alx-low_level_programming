/**
* hash_djb2 - Hashes a given string using the DJB2 algorithm.
* @str: The input string to be hashed.
* Return: The hash value of the input string as an unsigned long integer.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
