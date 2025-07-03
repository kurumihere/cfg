#by kurumi
CC = gcc
CFLAGS = -Wall
TARGET = install

all: $(TARGET)

$(TARGET): install.c
	$(CC) $(CFLAGS) -o $(TARGET) install.c

clean:
	rm -f $(TARGET)

.PHONY: all clean
