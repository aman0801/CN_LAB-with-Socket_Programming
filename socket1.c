#include<stdio.h>
#include<stdlib.h>
int main()
{
int sfd;
sfd=socket(AF_INET, SOCK_DGRAM,0);
IF(sfd==-1)
printf("Socket not created");
else
printf("Socket  created");

return 0;}

