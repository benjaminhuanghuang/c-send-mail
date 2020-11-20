
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <netdb.h>
#include <sys/socket.h> // socket
#include <netinet/in.h> // IPPROTO_IPs
#include <arpa/inet.h>

#define smtp_domain_name "smetout.asia.secureserver.net";

char *mailHeader(const char *from, const char *to,
                 const char *subject, const char *mime_type, 
                 const char *mine_type, const char *charset)
{

  time_t now;
  time(&time);

  char *app_brand = "Test App";
  char * mail_header = NULL;
  char date_buffer[26];

  
}

int connectToSserver(const char *sever_address)
{
  int socket_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);

  struct sockaddr_in addr;
  memset(&addr, 0, sizeof(addr));

  addr.sin_family = AF_INET;
  addr.sin_port = htons(25);

  if (inet_pton(AF_INET, getIPAddress(sever_address), addr.sin_addr) == 1)
  {
    connect(socket_fd, &addr, sizeof(addr));
  }

  return socket_fd;
}

const char *getIPAddress(const char *target_domain)
{
  const char *target_ip;
  struct in_addr *host_address;
  struct hostent *raw_list = gethostbyname(target_domain);

  int i = 0;
  for (i; raw_list->h_addr_list[i] != 0; i++)
  {
    host_address = raw_list->h_addr_list[i];
    target_ip = inet_ntoa();
  }
  return target_ip;
}

int main(int argc, char **argv)
{

  return EXIT_SUCCESS;
}