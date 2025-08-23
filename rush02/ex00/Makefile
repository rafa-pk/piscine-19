HEADERS = headerfile.h

SOURCES =

OBJECTS = ${SOURCES :.c=.o}

CFLAGS = -Wall -Werror -Wextra

CC = cc


all :
	$(cc) $(CFLAGS) $(OBJECTS) $(CHEADERS)
	ar -rcs $(LIB) *.o

clean : 
	rm - f $(OBJECTS)

fclean :
	clean
	rm -f $()

.PHONY :
