#include "libft.h"

void		ft_swapmem(char **store, char *buf)
{
	char	*tempstore;

	if (*store)
	{
		tempstore = *store;
		*store = ft_strjoin(tempstore, buf);
		free(tempstore);
		tempstore = NULL;
	}
}