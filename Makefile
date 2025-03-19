CC=gcc
AS=nasm
CFLAGS=-Wall -Wextra -Iinclude
LDFLAGS=
OBJDIR=obj
SRCDIR=src
ASMDIR=asm

SOURCES=$(wildcard $(SRCDIR)/*.c)
ASM_SOURCES=$(wildcard $(ASMDIR)/*.s)
OBJECTS=$(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o) $(ASM_SOURCES:$(ASMDIR)/%.s=$(OBJDIR)/%.o)

all: $(OBJDIR) locomotive

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(ASMDIR)/%.s
	$(AS) -f elf64 $< -o $@

locomotive: $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o locomotive

clean:
	rm -rf $(OBJDIR) locomotive
