
  #include <sys/types.h>         
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> 
#include <stdio.h>
  
int main()
{
int sfd;
sfd=socket(AF_INET, SOCK_DGRAM,0);
if(sfd==-1)
printf("Socket not created");
else{
printf("Socket  created\n");

struct sockaddr_in myaddr;
int len= sizeof(myaddr);
myaddr.sin_family=AF_INET;
myaddr.sin_port=htons(3490);//INADDR_ANY
myaddr.sin_addr.s_addr=htonl(INADDR_ANY);

//inet_addr("127.0.0.1");
int bfd=bind(sfd,(const struct sockaddr *)&myaddr,len);
if(bfd<0)
printf("\nbind is failure");
else
printf("\nbind is successful");
}
return 0;}
