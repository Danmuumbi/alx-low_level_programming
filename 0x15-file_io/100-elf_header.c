#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include "main.h"

#define ELF_MAGIC 0x464C457F

void print_error()
{
	int i;
	dprintf(2, "Error: Not an ELF file\n");
	exit(98);
}

void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x", header->e_ident[i]);
		printf(" ");
	}
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}
printf("  Version:                           %u (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("Tru64\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("OpenBSD\n");
		break;
	case ELFOSABI_ARM_AEABI:
		printf("ARM EABI\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
}
printf("  ABI Version:                       %u\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
            break;
	default:
	    printf("<unknown: %x>\n", header->e_type);
}
printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error();
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error();
	}

	if (*(unsigned int *)header.e_ident != ELF_MAGIC)
	{
		print_error();
	}

	print_elf_header(&header);

	close(fd);
	return 0;
}
