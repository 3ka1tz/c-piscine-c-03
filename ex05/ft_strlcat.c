unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;

	dstlen = 0;
	while (dest[dstlen] && dstlen < size)
		dstlen++;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstlen == size)
		return (size + srclen);
	i = 0;
	while (src[i] && dstlen + i < size - 1)
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dstlen + srclen);
}
