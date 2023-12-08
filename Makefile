
CC = gcc
APP = matrix
BUILD_DIR = ./build
SRCS = $(shell find . -type f -name "*.c")
OBJS = $(SRCS:%=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR)/$(APP)

$(BUILD_DIR)/$(APP): $(OBJS)
	$(CC) $(OBJS) -o $@
	echo "Generating Binary $(BUILD_DIR)/$(APP)"

$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ 

.PHONY: clean

clean:
	@rm -rf $(BUILD_DIR)
	
