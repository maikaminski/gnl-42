/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:26:25 by makamins          #+#    #+#             */
/*   Updated: 2024/11/27 17:34:13 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_first_line(int fd, char *buffer, char line)
{
	int		read_line;
	int		done;
	char	*temporary;	
	
	read_line = 1;
	done = 0;
	while (read_line > 0 && !done)
	{
		read_line = read(fd, buffer, BUFFER_SIZE);
		if (read_line < 0)
			return (NULL);
		temporary = line;
		line = ft_strjoin(temporary, buffer);
	}
}

char	*get_next_line(int fd)
{
    
}