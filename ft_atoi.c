#include <unistd.h>

ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45) // jezeli minus to sprawdz czy pozytywny czy negatywny
		{
			return ();
		}
		while ((str[i] >= 0 && str[i] <= 42) && str[i] == 44 && (str[i] >= 46
				&& str[i] <= 47))
		{
			return ();
		}
		i++;
	}
	return (NULL);
}