char	*ft_strcat(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*dst)
		dst++;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dest);
}
