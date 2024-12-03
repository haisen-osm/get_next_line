#include "get_next_line.h"

int main()
{
	int fd = open("text1.txt",O_WRONLY);
	// if (fd < 0)
	// {
		printf("fd : %d\n",fd);
	// 	return 0;
	// }
	// char *line1 = get_next_line(fd);
	// printf("%s",line1);
	// free(line1);
	// char *line2 = get_next_line(fd);
	// printf("%s",line2);
	// free(line2);
	char *line;
	// while ((line = get_next_line(fd)) != NULL)
	// {
	// 	printf("%s",line);
	// 	free(line);
	// }
	line = get_next_line(fd);
	printf("%s",line);
	free(line);

}