char	*ft_strcat(char *dest, char *src)
{
	char *d;

	d = dest;
	while (*d)
	{
		d++;
	}
	while (*src)
	{
		*d++ = *src++;
	}
	*d = '\0';
	return(dest);
}
