#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<ctype.h>
int main()
{
int f,i;
char buffer[100];
f=open("fifo1",O_RDWR);
int n=read(f,buffer,100);
for(i=0;i<n;i++)
{
if(isupper(buffer[i]))
buffer[i]=tolower(buffer[i]);
else if(islower(buffer[i]))
buffer[i]=toupper(buffer[i]);
}
printf("total number of bytes read is %d\n",n);
printf("%s hI tHERE\n",buffer);
printf("process %d finished\n",getpid());
}
