
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#ifndef GET_NExT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/*
fonctions créée pour ce projet. 
-line_after_return -> permet de sauvegarder la ligne après le retour à la ligne.
-line_with_return -> permet de retourner la ligne avec le retour à la ligne (resultat).
-read_the_line -> permet de lire la première ligne (selon buffersize) dans le fichier.
*/
char *line_after_return(char *stash);
char *line_with_return(char *stash);
char *read_the_line(int fd, char* stash);

/*
prototype de la fonction
*/
char *get_next_line(int fd);

/*
fonction reprise de la libft.
*/
size_t	ft_strlen(char *s);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);

#endif
