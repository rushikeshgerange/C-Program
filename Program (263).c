#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[50];
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        iRet = read(fd,Arr,21);
        printf("%d bytes gets successfully read from the file \n",iRet);

        printf("%s\n", Arr);

        close(fd);
    }

    return 0;
}