#include <fcntl.h>
#include <unistd.h>

int main()
{
char	woody[] = { 0x2e, 0x2e, 0x2e, 0x2e, 0x57, 0x4f, 0x4f, 0x44, 0x59, 0x2e, 0x2e, 0x2e, 0x2e, 0x2e, 0x0a, 0x00, 0x48, 0xC7, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x57, 0x56, 0x52, 0x48, 0xC7, 0xC7, 0x01, 0x00, 0x00, 0x00, 0x48, 0xC7, 0xC6, 0x54, 0x02, 0x40, 0x00, 0x48, 0xC7, 0xC2, 0x11, 0x00, 0x00, 0x00, 0x0F, 0x05, 0x5A, 0x5E, 0x5F };

int fd = open("demo", O_WRONLY | O_TRUNC | O_CREAT, 0644);
	write(fd, woody, 52);


}