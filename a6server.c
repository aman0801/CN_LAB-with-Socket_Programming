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
	int sfd,max;
	struct sockaddr_in myaddr,caddr;
	sfd = socket(AF_INET,SOCK_DGRAM,0);
	if(sfd == -1)
	{
		printf("socket not created \n");
		exit(0);
	}
	else
	{
		printf("socket created \n");
		int len = sizeof(myaddr);
		myaddr.sin_family = AF_INET;
		myaddr.sin_port = htons(3490);
		myaddr.sin_addr.s_addr = inet_addr ("127.0.0.1");
		int bfd = bind(sfd,(const struct sockaddr *)&myaddr,len);
		if(bfd == -1){
			printf("bind error\n");
			exit(0);
		}
		else
		{
			printf("bind successful \n");	
		}
	}
	    struct calcul s1,hs;
	    int len2=sizeof(caddr);
	    recvfrom(sfd,&s1,sizeof(s1),0,(struct sockaddr *)&caddr,&len2);
	switch(s1.x[0])      
    {  
        case '+':  
            hs.res = s1.a + s1.b; // add two numbers  
           
            break;  
          
        case '-':  
            hs.res = s1.a - s1.b; // subtract two numbers  
            
            break;  
              
        case '*':  
            hs.res = s1.a * s1.b; // multiply two numbers  
            
            break;            
          
        case '/':  
            
            hs.res = s1.a / s1.b; // divide two numbers  
              
            break;  
        default: 
            printf (" Something is wrong!!  ");               
    }
    
	    sendto(sfd,&hs,sizeof(hs),0,(const struct sockaddr *)&caddr,sizeof(caddr));
	    int close(int sfd);
	return 0;
	
}
