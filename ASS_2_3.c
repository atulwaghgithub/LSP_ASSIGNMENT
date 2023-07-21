#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    DIR *dp = NULL;
    struct dirent *entry = NULL;

 
      if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
       printf("Name of directory is : %s \n",argv[1]);
    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }
  printf("Printing Directory file names : \n");
    while((entry = readdir(dp)) != NULL)
    {
        printf("%s\n",entry->d_name);
    }

    closedir(dp);
    
    return 0;
}