#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netinet/ip.h>
 struct calcul{
float a,b,res;
char x[2];
};
int main()
{
	int sfd;
	struct calcul s1,hs;
	sfd = socket(AF_INET,SOCK_DGRAM,0);
	if(sfd == -1)
	{
		printf("socket not created \n");
		exit(0);
	}
	else
	{
		printf("socket created \n");
	}
	        struct sockaddr_in saddr;
	        saddr.sin_family = AF_INET;
	        saddr.sin_port = htons(3490);
	        saddr.sin_addr.s_addr = inet_addr("127.0.0.1");
		printf("Enter 1st no=");
scanf("%f",&s1.a);
printf("Enter 2nd no=");
scanf("%f",&s1.b);
printf("Enter arithmetic operator =");
scanf("%s",s1.x);
		sendto(sfd,&s1,sizeof(s1),0,(const struct sockaddr *)&saddr,sizeof(saddr));
		
		int close(int sfd);
		return 0;
}
