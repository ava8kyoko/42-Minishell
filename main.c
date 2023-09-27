#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>

//#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t size_tocopy)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!src)
// 		return (0);
// 	if (size_tocopy == 0)
// 		return (ft_strlen(src));
// 	while (src[i] != '\0' && --size_tocopy)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(src));
// }

int take_input(char *str)
{
	char *buf;

	buf = readline("\n>>> ");
	if (strlen(buf) != 0)
	{
		add_history(buf);
		strcpy(str, buf);
		return (0);
	}
	else
		return (1);
}

void	print_directory()
{
	char	cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("%s\n", cwd);
}

int	main()
{
	char str[1024];

	while (1)
	{
		print_directory();
		if (take_input(str))
			continue;
		printf("%s ", str);
		// wait(NULL);
	}
	
	return (0);
}