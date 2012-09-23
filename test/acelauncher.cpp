
#include <cstdlib>
#include <string>
#include "ace/OS_main.h"
#include "ace/ACE.h"
#include "ace/Svc_Handler.h"
#include "ace/Acceptor.h"
#include "ace/Log_Msg.h"
#include "ace/SOCK_Acceptor.h"
#include "ace/Thread.h"

#define RESPONSE "HTTP/1.1 200 OK\nContent-Type: text/html; charset=utf-8\nContent-Length: 20\n\n<h1>HELLO WORLD</h1>"
static const std::string cIndexCommand("GET /hello.htm"); 

class My_Svc_Handler:
    public ACE_Svc_Handler <ACE_SOCK_STREAM,ACE_NULL_SYNCH>
{
public:

	int open(void*)
    {
        ACE_INET_Addr raddr;
        peer().get_remote_addr(raddr);
        //ACE_DEBUG ((LM_DEBUG,ACE_TEXT ("(%P|%t) connect:%s %d %d\n"),raddr.get_host_addr(),raddr.get_port_number(),this));

        reactor()->register_handler(this,ACE_Event_Handler::READ_MASK);    
        return 0;
    }

    int handle_input(ACE_HANDLE)
    {

        char buffer[32] = {0};
        int len = peer().recv(buffer,sizeof(buffer)-1);
        if(len>0)
        {
			if (cIndexCommand.compare(0, 14, buffer)) 
            {
				peer().send_n(RESPONSE,sizeof(RESPONSE));
				//ACE_DEBUG ((LM_DEBUG,ACE_TEXT ("(%P|%t) close:%s \n"),buffer));
                return -1; //must return -1 to call handle_close
            }
            return 0;
        }
        else
        {
            return -1; //must return -1 to call handle_close
        }
    }

    int handle_close(ACE_HANDLE handle,ACE_Reactor_Mask close_mask)
    {
        ACE_INET_Addr raddr;
        peer().get_remote_addr(raddr);
        //ACE_DEBUG ((LM_DEBUG,ACE_TEXT ("(%P|%t) close:%s %d\n"),raddr.get_host_addr(),raddr.get_port_number()));
        peer().close();
        return 0;
    }
};

typedef ACE_Acceptor<My_Svc_Handler,ACE_SOCK_ACCEPTOR> MyAcceptor;

int main(int argc, char *argv[])
{
	int port=1500;
    ACE_INET_Addr addr(port);
    MyAcceptor server;

    if(server.open(addr)==-1)
    {
        ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("(%P|%t) port:%d %p\n"),port ,ACE_TEXT ("bind failed")));
        return 1;
		}
		ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("(%P|%t) port:%d\n"),port ,ACE_TEXT ("bind success")));

    while(1){
        ACE_Reactor::instance()->handle_events();
    }
    server.close();
    return 0;
}