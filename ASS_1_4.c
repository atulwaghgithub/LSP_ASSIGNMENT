#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    struct stat sobj;

    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
    stat(argv[1],&sobj);
    printf(" All Information About %s File \n",argv[1]);
    printf("1) File name : %s\n",argv[1]);
    printf("2) File size is : %d\n",sobj.st_size);
    printf("3) Number of links : %d\n",sobj.st_nlink);
    printf("4) Inode number : %d\n",sobj.st_ino);
    printf("5) File system number : %d\n",sobj.st_dev);
    printf("6) Number of blocks : %d\n",sobj.st_blocks);
    printf("7) Mode of File  : %d\n",sobj.st_mode);
    printf("8) User ID  of File : %d\n",sobj.st_uid);
    printf("9) Time of last Access :: %d\n",sobj.st_atime);
    printf("10) Time of last data Modification : %d\n",sobj.st_mtime);
    printf("11) Time Of last Status Change : %d\n",sobj.st_ctime);


    return 0;
}