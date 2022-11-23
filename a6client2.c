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
		
		
		int len3=sizeof(saddr);
		recvfrom(sfd,&hs,sizeof(hs),0,(struct sockaddr *)&saddr,&len3);
		printf("So %f %s %f = %f \n",s1.a,s1.x,s1.b,hs.res);


return 0;
}
