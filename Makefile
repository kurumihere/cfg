#by kurumi
CC = gcc
CFLAGS = -O3 -Wno-unused-result
TARGET = install

all: $(TARGET)

$(TARGET): install.c
	$(CC) $(CFLAGS) -o $(TARGET) install.c

clean:
	rm -f $(TARGET)

.PHONY: all clean
