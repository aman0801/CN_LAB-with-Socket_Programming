#include<stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include<netinet/in.h>
#include<fcntl.h>
#include<string.h>
struct student{
int num;
};
int main()
{
int length,sockfd,fd1,r1,i,max;
struct sockaddr_in sa,ta1;

sockfd=socket(AF_INET,SOCK_STREAM,0);
sa.sin_family=AF_INET;
sa.sin_addr.s_addr=INADDR_ANY;
sa.sin_port=60018;
i=bind(sockfd,(struct sockaddr *)&sa, sizeof(sa));
printf("Test %d%d\n", sockfd,i);
if(sockfd==0)
{
printf("socket failed");
return 0;
}
if(i<0)
{
printf("bind failed");
return 0;}
listen(sockfd,5);
length=sizeof(sa);
fd1=accept(sockfd,(struct sockaddr *)&ta1,&length);
int n,c=0;
recv(fd1,(int *)&n,sizeof(n),0);

struct student s1[n];
recv(fd1,&s1,sizeof(s1),0);
for(int k=0;k<n;k++){

if((s1[k].num) %2 !=0)
c++;
}
int n1=c;

struct student hs[n1];
int j=0;
for(int k=0;k<n;k++){
if((s1[k].num )%2 !=0){
hs[j].num=s1[k].num;
j++;}
}
send(fd1,&n1,sizeof(n1),0);
send(fd1,&hs,sizeof(hs),0);
close(fd1);
return 0;
}

