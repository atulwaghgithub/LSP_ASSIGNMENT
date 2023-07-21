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
    char name[30];
    struct stat sobj;
    

        if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
       printf("Name of 1 directory is : %s\n",argv[1]);

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }

    while((entry = readdir(dp)) != NULL)
    {
        sprintf(name,"%s/%s",argv[1],entry->d_name);
        stat(name,&sobj);
  //      printf("%s : \n",name);
        if(S_ISREG(sobj.st_mode))
        {
            if(sobj.st_size == 0)
            {
                printf("%s is an empty file : \n",name);
                remove(name);
            }
        }
    }

    closedir(dp);
    
    return 0;
}
