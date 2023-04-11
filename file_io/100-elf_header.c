#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char* message) {
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const Elf64_Ehdr* header) {
	printf("ELF Header:\n");
	printf("  Magic:   ");
	int i;
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI]) {
	case ELFOSABI_SYSV: printf("UNIX System V ABI\n"); break;
	case ELFOSABI_HPUX: printf("HP-UX ABI\n"); break;
	case ELFOSABI_STANDALONE: printf("Standalone (embedded) ABI\n"); break;
	default: printf("<unknown>\n"); break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type) {
	case ET_NONE: printf("NONE (Unknown type)\n"); break;
	case ET_REL: printf("REL (Relocatable file)\n"); break;
	case ET_EXEC: printf("EXEC (Executable file)\n"); break;
	case ET_DYN: printf("DYN (Shared object file)\n"); break;
	case ET_CORE: printf("CORE (Core file)\n"); break;
	default: printf("<unknown>\n"); break;
	}
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}
int main(int argc, char* argv[]) {
	Elf64_Ehdr header;
	if (argc != 2) {
		print_error("Invalid number of arguments");
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		print_error("Failed to open file");
	}
	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header)) {
		print_error("Failed to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	            header.e_ident[EI_MAG1] != ELFMAG1 ||
	            header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3) {
		print_error("File is not an ELF file");
	}

	print_elf_header(&header);

	close(fd);
	return 0;
}
