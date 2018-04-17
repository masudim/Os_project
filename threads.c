#include<pthread.h>
#include<stdio.h>
int Max, Min;
float average;
int arr[50],s,i;

void *fun1();
void *fun2();
void *fun3();

int main()
{
pthread_t a,b,c;
printf("enter size of array\n");
scanf("%d",&s);
printf("enter %d elements of arr\n",s);
for(i=0;i<s;i++)
scanf("%d",&arr[i]);

pthread_create(&a,NULL,fun1,NULL);
pthread_join(a,NULL);
pthread_create(&b,NULL,fun2,NULL);
pthread_join(b,NULL);
pthread_create(&c,NULL,fun3,NULL);
pthread_join(c,NULL);
}
void *fun1()
{
Max=arr[0];
for(i=1;i<s;i++)
{
if(Max<arr[i])
Max=arr[i];
}
printf("largest element is %d\n",Max);
return 0;
}

void *fun2()
{
Min=arr[0];
for(i=0;i<s;i++)
{
if(arr[i]<Min)
{
Min=arr[i];
}
}
printf("smallest element is %d\n",Min);
return 0;
}

void *fun3()
{
int sum;
for(i=0;i<s;i++)
{
sum=sum+arr[i];
}
average=(float)sum/s;
printf("average is %f\n",average);

} 


