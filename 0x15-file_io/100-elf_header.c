#include "main.h"

/* The structure for the ELF header. */
typedef struct {
unsigned char e_ident[16];
uint16_t e_type;
uint16_t e_machine;
uint32_t e_version;
uint64_t e_entry;
uint64_t e_shoff;
uint16_t e_phnum;
uint32_t e_flags;
uint16_t e_shstrndx;
uint16_t e_ehsize;
uint16_t e_phentsize;
uint16_t e_shentsize;
uint16_t e_shnum;
uint64_t e_phoff;
} elf_header;

/* Function to print ELF header information. */
void print_elf_header(const elf_header *header)
{
int i;

/* Print the elf header headline. */
printf("ELF Header:\n");

/* Print the magic numbers. */
printf("  Magic:   ");
for (i = 0; i < 16; i++)
printf("%02x ", header->e_ident[i]);

printf("\n");

/* Print the class of the file. */
printf("  Class:                             ");
if (header->e_ident[4] == 1)
printf("ELF32\n");
else if (header->e_ident[4] == 2)
printf("ELF64\n");
else
printf("<unknown>\n");

/* Print the data encoding of the file. */
printf("  Data:                              2's complement, %s endian\n", header->e_ident[5] == 1 ? "little" : "big");

/* Print the version of the file. */
printf("  Version:                           %d (current)\n", (int)header->e_ident[6]);

/* Print the OS/ABI of the file. */
printf("  OS/ABI:                            ");
switch (header->e_ident[7])
{
/* The OS/ABI is UNIX - System V. */
case 0:
printf("UNIX - System V\n");
break;

/* The OS/ABI is UNIX - Solaris. */
case 6:
printf("UNIX - Solaris\n");
break;

/* The OS/ABI is AIX. */
case 7:
printf("AIX\n");
break;

/* The OS/ABI is IRIX. */
case 8:
printf("IRIX\n");
break;

/* The OS/ABI is FreeBSD. */
case 9:
printf("FreeBSD\n");
break;

/* The OS/ABI is TRU64. */
case 10:
printf("TRU64\n");
break;

/* The OS/ABI is Novell Modesto. */
case 11:
printf("Novell Modesto\n");
break;

/* The OS/ABI is OpenBSD. */
case 12:
printf("OpenBSD\n");
break;

/* The OS/ABI is OpenVMS. */
case 13:
printf("OpenVMS\n");
break;

/* The OS/ABI is NonStop Kernel. */
case 14:
printf("NonStop Kernel\n");
break;

/* The OS/ABI is AROS. */
case 15:
printf("AROS\n");
break;

/* The OS/ABI is Fenix OS. */
case 16:
printf("Fenix OS\n");
break;

/* The OS/ABI is CloudABI. */
case 17:
printf("CloudABI\n");
break;

/* The OS/ABI is Stratus Technologies OpenVOS. */
case 18:
printf("Stratus Technologies OpenVOS\n");
break;

/* The OS/ABI is Nuxi CloudABI. */
case 19:
printf("Nuxi CloudABI\n");
break;

/* The OS/ABI is UNIX - NetBSD. */
case 64:
printf("UNIX - NetBSD\n");
break;

/* The OS/ABI is unknown. */
default:
printf("<unknown: %d>\n", header->e_ident[7]);
break;
}

/* Print the ABI version of the file. */
printf("  ABI Version:                       %d\n", (int)header->e_ident[8]);

/* Print the type of the file. */
printf("  Type:                              ");
switch (header->e_type)
{
case 0:
printf("NONE (No file type)\n");
break;

case 1:
printf("REL (Relocatable file)\n");
break;

case 2:
printf("EXEC (Executable file)\n");
break;

case 3:
printf("DYN (Shared object file)\n");
break;

case 4:
printf("CORE (Core file)\n");
break;

default:
printf("<unknown: %d>\n", (int)header->e_type);
break;
}

/* Print the machine of the file. */
printf("  Entry point address:               0x%lu\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
elf_header header;
int fd;

/* Check if the number of arguments is correct. */
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return 1;
}

/* Open the file for reading. */
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error opening file: %s\n", strerror(errno));
return 98;
}

/* Read the ELF header. */    
if (read(fd, &header, sizeof(elf_header)) != sizeof(elf_header))
{
fprintf(stderr, "Error reading ELF header: %s\n", strerror(errno));
close(fd);
return 98;
}

/* Check if the file is an ELF file. */
if (memcmp(header.e_ident, "\x7f\x45\x4c\x46", 4) != 0)
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return (98);
}

/* Print the ELF header. */
print_elf_header(&header);

/* Close the file. */
close(fd);

return (0);
}

