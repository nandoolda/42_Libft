#include <stdio.h>

unsigned int	ft_strlen(const char *s);

int	main()
{
	const char *s;

	s = "Hello 42!";
	printf("%d  %s\n", ft_strlen(s), s);
}
