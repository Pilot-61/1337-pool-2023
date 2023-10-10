#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	deff;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			deff = *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return (deff);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
int	main(int argc, char **argv)
{
	int	i;
	char	j[265265];
	int	l;

	i = 0;
	l = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i],argv[i + 1]) > 0)
			{
				ft_strcpy(j, argv[i]);
				ft_strcpy(argv[i], argv[i + 1]);
				ft_strcpy(argv[i + 1], j);
			}
			i++;
		}
		i = 0;
		while (l < argc)
		{
			ft_putstr(argv[l]);
			ft_putchar('\n');
			l++;
		}
	}
	return (0);
}
