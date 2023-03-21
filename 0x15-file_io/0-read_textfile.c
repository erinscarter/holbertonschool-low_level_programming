
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: name of file to be read/printed
   * @letters: number of letters it should read and print
    * Return: actual number of letters it could read and print, 0 on failure
     */
     ssize_t read_textfile(const char *filename, size_t letters)
     {
     	int fd, readed;
		char *buff = malloc(sizeof(char *) * letters);

			if (!buff)
					return (0);

						if (!filename)
								return (0);

									fd = open(filename, O_RDONLY, 0600);
										if (fd == -1)
												return (0);

													readed = read(fd, buff, letters);
														write(STDOUT_FILENO, buff, readed);

															free(buff);
																close(fd);
																	return (readed);
																	}
