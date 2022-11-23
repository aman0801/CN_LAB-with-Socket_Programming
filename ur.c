#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> 
#include <stdio.h>
/* superset of previous */

int main()
{		struct sockaddr_in saddr,cliaddr;
               saddr.sin_family=AF_INET; /* address family: AF_INET */
               saddr.sin_port=5050;   /* port in network byte order */
               saddr.sin_addr.s_addr=INADDR_ANY;   /* internet address */
               
           

	int sf=socket(AF_INET,SOCK_DGRAM,0);
	int b=bind(sf,(struct sockaddr*)&saddr,sizeof(struct sockaddr ));
	if(b<0)
		printf("bind is failure");
}
