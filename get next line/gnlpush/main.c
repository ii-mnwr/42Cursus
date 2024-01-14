#include "get_next_line.h"
#include "get_next_line_bonus.h"

int	main()
{
	int	fd = open("sample.txt", O_RDONLY);
	char	*line = get_next_line(fd);
	printf("Test Case 1 : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("Second Line : %s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("Third Line : %s\n", line);
	free(line);
	close(fd);
}
