#include<stdio.h>
#include<fcntl.h>
#include <string.h>
int main(int argc ,char* argv[])
{
    int fd=0;
    int mode=0;
    if(argc !=3)
    {
        printf("Invalid Number of Arguments ...\n");
        return -1;
    }
    if(strcmp(argv[2],"read")==0)
    {
        mode=O_RDONLY;
         printf("File Open in Read Mode ... \n");
    }
    else if(strcmp(argv[2],"readwrite")==0)
    {
       mode=O_RDWR;
       printf("File Open in Read Write Mode ... \n");
    }
      else  if(strcmp(argv[2],"write")==0)
    {
        mode=O_WRONLY;
        printf("File Open in write Mode ... \n");
    }
     else if(strcmp(argv[2],"creat")==0)
    {
        mode=O_CREAT;
        printf("File Open in Creat Mode ... \n");
    }
    else
    {
        mode=O_RDONLY;
        printf("File Open in Read Mode in else ... \n");
    }
    fd=open(argv[1],mode);
    if(fd==-1)
    {
        printf("Unable to open file ... \n");
        return -1;
    }
    else
    {
        printf(" File open Successfully with fd=%d  and Mode is %d \n",fd,mode);
    }
    return 0;
}