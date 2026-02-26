char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dst;

	dst = dest;
	while (*dst)
		dst++;
	while (*src && nb--)
		*dst++ = *src++;
	*dst = '\0';
	return (dest);
}
