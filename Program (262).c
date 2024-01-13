#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[] = "Angular web developement";
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        iRet = write(fd,Arr,24);
        printf("%d number of bytes gets successfully written into the file \n ",iRet);

        close(fd);
    }

    return 0;
}