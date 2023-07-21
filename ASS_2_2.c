#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define BLOCKSIZE 1024
int main(int argc, char *argv[])
{
    int fd = 0;
    int Ret = 0;
    char Buffer[BLOCKSIZE];
   
    if(argc != 3)
    {
        printf("Insufficient arguments....\n");
        return -1;
    }
 printf("Argument1 file name is %s \n",argv[1]);
    fd = open(argv[1], O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to open file.....\n");
        return -1;
    }

   // while((Ret = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        write(fd,argv[2],sizeof(argv[2]));
    }
    
    close(fd);

    return 0;
}