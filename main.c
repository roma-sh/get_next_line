#include "get_next_line.h"

int	main(void)
{
	char		*buffer;
	int			fd;
	int			lines;

	lines = 0;
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
	{
		write(1, "Error in malloc\n", 16);
		return (1);
	}
	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file");
		return (1);
	}
	while (5)
	{
		buffer = get_next_line(fd);
		if (buffer == NULL)
			break ;
		lines++;
		printf("Line %d:%s", lines, buffer);
	}
	close(fd);
	return (0);
}
