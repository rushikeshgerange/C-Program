#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<String.h>

int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,strlen(Arr));      //(Kashat lihayach, kay lihayach, kiti lihayach);
  //  Ret = write(fd,Arr,22);      //(Kashat lihayach, kay lihayach, kiti lihayach);

    printf("%d Bytes get written in the file \n",Ret);

    close(fd);

    return 0;
}

// O_RDONLY  =   Read
// O_WRONLY  =   Write
// O_RDWR    =   Read + Write