/**
 * _strcpy - Entry point
 * @dest: destination
 * @src: source
 * Return: return the  pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *swp = dest;

	while (src)
	{
		*dest++ = *src++;
	}
	return (src);
}
