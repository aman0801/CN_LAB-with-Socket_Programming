#include<stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include<netinet/in.h>
#include<fcntl.h>
#include<string.h>
struct calcul{
float a,b,res;
char x;
};
int main()
{
int i,sockfd,r1;
char buf[100];
struct calcul s1,hs;
struct sockaddr_in sa;
sockfd=socket(AF_INET,SOCK_STREAM,0);
sa.sin_family=AF_INET;
sa.sin_addr.s_addr=inet_addr("127.0.0.1");
sa.sin_port=60018;
i= connect(sockfd,(struct sockaddr   *)&sa,sizeof(sa));

printf("Enter 1st no=");
scanf("%f",&s.a);
printf("Enter 2nd no=");
scanf("%f",&s.b);
printf("Enter arithmetic operator =");
scanf("%c",s.x);

}
send(sockfd,&s1,sizeof(s1),0);
recv(sockfd,&hs,sizeof(hs),0);
printf("So %f %c %f = %f \n",s1.a,s1.x,s1.b,hs.res);

close(sockfd);
return 0;
}
