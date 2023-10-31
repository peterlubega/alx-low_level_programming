#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error_exit - Prints an error message to stderr and exits with status 98.
 * @message: The error message to print.
 */

void error_exit(char *message)
{
dprintf(2, "%s", message);
exit(98);
}

/**
 * print_elf_header - Prints information from the ELF header.
 * @header: A pointer to the ELF header.
 */

void print_elf_header(Elf64_Ehdr *header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", header->e_ident[i]);
if (i < EI_NIDENT - 1)
printf(" ");
}
printf("\n");
printf("  Class:   %s\n",
header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64"
);
printf("  Data:    %s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little-endian" :
"2's complement, big-endian"
);
printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %s\n",
header->e_type == ET_REL ? "REL (Relocatable file)" :
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
header->e_type == ET_DYN ? "DYN (Shared object file)" :
header->e_type == ET_CORE ? "CORE (Core file)" : "UNKNOWN (Unknown type)"
);
printf("  Entry point address: %#lx\n", header->e_entry);
printf("Start of program headers: %ld (bytes into file)\n", header->e_phoff);
printf("Start of section headers: %ld (bytes into file)\n", header->e_shoff);
printf("Flags: 0x%x\n", header->e_flags);
printf("Size of this header: %d (bytes)\n", header->e_ehsize);
printf("Size of program headers: %d (bytes)\n", header->e_phentsize);
printf("Number of program headers: %d\n", header->e_phnum);
printf("Size of section headers: %d (bytes)\n", header->e_shentsize);
printf("Number of section headers: %d\n", header->e_shnum);
printf("Section header string table index: %d\n", header->e_shstrndx);
}

/**
 * main - The entry point of the ELF header information program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on successful execution, 98 on errors.
 */

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
error_exit("Usage: elf_header elf_filename\n");

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Can't read from file\n");

if (read(fd, &header, sizeof(Elf64_Ehdr)) == -1)
error_exit("Error: Can't read from file\n");

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
error_exit("Error: Not an ELF file\n");
}

print_elf_header(&header);

close(fd);
return (0);
}
