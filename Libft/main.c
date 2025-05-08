#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CHECK HEADER FOR EVERY FUNCTION + BONUS

//strnstr --> HelloHello lo  14

//dup invalid read --> (strlen() + 1)

//strjoin = ft_strjoin(NULL, str2);

//ft_substr

//FRAG FELIX NOCHMAL WEGEN NULL IM PARARMETER CALLEN?


#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#include <stdio.h>

static int	count_words(char const *str, char c)
{
	int	wcount;
	int	i;

	wcount = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
		{
			wcount++;
			i++;
		}
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (wcount);
}

int		main(void)
{
	char	**strarr;
	char	*str;
	char	delimiter;
	int		i;

	str = "   1  2a,    3    --h    ";
	delimiter = ' ';

	printf("String to be split: %s\n", str);
	printf("Number of Words: %i\n", count_words(str, delimiter));
	strarr = ft_split(str, delimiter);
	i = 0;
	while (i < count_words(str, delimiter))
	{
		printf("%s\n", strarr[i]);
        free(strarr[i])
		i++;
	}
	free(strarr);
	return (0);
}


