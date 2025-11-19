CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -lm
BUILDDIR = bin

SRCDIRS = 01_Basics 02_Control_Flow 03_Number_Logic 04_Arrays 05_Searching_Sorting 06_Pointers_Memory 07_Mini_Projects

SOURCES = $(foreach dir,$(SRCDIRS),$(wildcard $(dir)/*.c))

TARGETS = $(patsubst %.c,$(BUILDDIR)/%,$(notdir $(SOURCES)))

vpath %.c $(SRCDIRS)

.PHONY: all clean help

all: $(TARGETS)

$(BUILDDIR)/%: %.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)
	@echo "Compiled $< -> $@"

clean:
	@rm -rf $(BUILDDIR)
	@echo "Cleaned build directory."

help:
	@echo "Usage:"
	@echo "  make        Compile all programs"
	@echo "  make clean  Remove all executables"