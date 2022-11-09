char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;

	d = dest;
	while (*d)
	{
		d++;
	}
	while (nb-- && *src)
	{
		*d++ = *src++;
	}
	*d = '\0';
	return(dest);
}
