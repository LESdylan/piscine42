 CC = gcc
 CFLAGS = -g -Wall -Wextra -Werror
 TARGET = file.exe
 PATH_EX= ./ex07
 SRC = $(PATH_EX)/a.c

 
all: $(TARGET)
$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
clean: 
	rm -rf $(TARGET)
exe: $(TARGET)
	./$(TARGET)
update:
	git add .; git commit -m "updated"; git push
