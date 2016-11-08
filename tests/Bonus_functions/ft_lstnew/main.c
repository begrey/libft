#include <stdlib.h>
#include "../../../libft.h"

void	ft_print_result(char const *s)
{
	while (*s)
	{
		write(1, &*s, 1);
		s++;
	}
}

void	ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main(int argc, const char *argv[])
{
	t_list		*elem;

	if (argc == 1)
		return (0);
	if (atoi(argv[1]) == 1)
	{
		char	str [] = "lorem ipsum dolor sit";

		if (!(elem = ft_lstnew(str, (sizeof(str)))))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
			{
				ft_print_result(elem->content);
				write(1, "\n", 1);
			}
				ft_print_result2(elem->content_size);
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
	}
	else if (atoi(argv[1]) == 2)
	{
		int		i;

		i = 42;
		if (!(elem = ft_lstnew(&i, (sizeof(i)))))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
			{
				ft_print_result2(*(int *)(elem->content));
				write(1, "\n", 1);
			}
				ft_print_result2(elem->content_size);
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
	}
	else if (atoi(argv[1]) == 3)
	{
		if (!(elem = ft_lstnew(NULL, 5)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
			{
				ft_print_result("NULL");
				write(1, "\n", 1);
			}
			else
			{
				ft_print_result(elem->content);
				write(1, "\n", 1);
			}
				ft_print_result2(elem->content_size);
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
	}
	return (0);
}
