#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
void error_handling(char* message);

int BSNIdx(char buf[])
{
	int i;
	for(i=0; i<10; i++)
	{
		if(buf[i] == 10)
			return i;
	}
	return 10;
}

int main(void)
{
	int fd1, fd2;
	char buf[10];
	int readResult;
	int idx;
	fd1 = open("res.txt", O_CREAT|O_RDONLY);
	fd2 = open("des.txt", O_CREAT|O_WRONLY|O_TRUNC);

	if(fd1==-1)
		error_handling("fd1 error!");

	if(fd2==-1)
		error_handling("fd2 error!");
	printf("file descriptor: %d, %d\n", fd1, fd2);

	while(1)
	{
		readResult = read(fd1, buf, sizeof(buf));
		if(readResult == -1)
			error_handling("read() error!");
		else if(readResult == 0)
			break;

		idx = BSNIdx(buf);
		
		if(write(fd2, buf, idx) == -1)
			error_handling("write() error!");
	}
	
	close(fd1);
	close(fd2);
	return 0;
}

void error_handling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}
