#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_Hi
#ifndef BUFFER_SZE
# define BUFFER_SIZE 42
# include <unistd.h>
# include <stdlib.h>

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
size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strjoin(const char *s1, const char *s2);

#endif
