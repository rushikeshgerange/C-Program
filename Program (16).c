#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<String.h>

int main()
{
    unlink("Marvellous.txt");

    printf("File deleted succefully...\n");

    return 0;
}