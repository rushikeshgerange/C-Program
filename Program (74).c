#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<String.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = read(fd,Arr,10);      
  //  Ret = write(fd,Arr,22);      

    printf("%d Bytes get written in the file \n",Ret);
    printf("Data is : %s\n",Arr);

    close(fd);

    return 0;
}

// O_RDONLY  =   Read
// O_WRONLY  =   Write
// O_RDWR    =   Read + Write