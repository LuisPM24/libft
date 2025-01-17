void	*ft_calloc(size_t nmemb, size_t size){
	size_t	cont;
	void	*mem;
	unsigned char	*mem_ini;//Unsigned char porque pesa 1byte

	cont = 0;
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	mem_ini = (unsigned char	*)mem;
	while (cont < (nmemb * size))
	{
		mem_ini[cont] = 0;
		cont++;
	}
	return (mem);
}
