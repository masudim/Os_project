#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int f;
f=open("fifo1",O_RDWR);
write(f,"Hi There",8);
printf("process %d finished\n",getpid());
}
