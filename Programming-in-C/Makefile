
CC = gcc
CFLAGS = -Wall -Wextra -O2

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = main

all: $(EXECUTABLE)

# Link object files to create executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

# Remove object files and executable
distclean: clean
	rm -f $(EXECUTABLE)

.PHONY: all clean distclean
