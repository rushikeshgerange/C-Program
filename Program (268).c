#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the name of file that you want to open from current directory \n");
    scanf("%s",&FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open %s file \n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName,fd);

        printf("Enter the data that you want to write into the file : \n");
        scanf(" %[^'\n']s",Arr);                // Enter space for waiting 

        iRet = write(fd,Arr,strlen(Arr));

        printf("%d bytes get successfully written into the file \n",iRet);

        close(fd);
    }

    return 0;
}