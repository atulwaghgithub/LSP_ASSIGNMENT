#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>




int main(int argc, char *argv[])
{
    int mode=0;
    if(argc!=3)
{
    printf("Insufficient Arguments \n");
    return -1;
}
if(strcmp(argv[2],"read")==0)
{
    mode=R_OK;
    printf("File Access mode is: %s \n"argv[2]);
}
if(strcmp(argv[2],"write")==0)
{
    mode=W_OK;
    printf("File Access mode is: %s \n"argv[2]);
}
if(strcmp(argv[2],"execute")==0)
{
    mode=X_OK;
    printf("File Access mode is: %s \n"argv[2]);
}
if(access(argv[1],mode)<0)
{
    printf("Unable to access %s file in %s mode \n",argv[1],argv[2]);

}
else
{
    printf("You can access %s file in %s mode \n",argv[1],argv[2]); 
}
//    printf("Enter Your ")
    return 0;
}