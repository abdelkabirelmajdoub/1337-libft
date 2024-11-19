#include "libft.h"

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*s;
	long int	num;

	num = n;
	len = n_len(num);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (num < 0)
	{
		num *= -1;
		s[0] = '-';
	}
	while (--len >= 0)
	{
		if (s[len] == '-')
			break;
		s[len] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
