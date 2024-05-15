#ifndef INCLUDED_HTTP_TCPSERVER
#include <string>

namespace http
{
	class TcpServer 
	{
	public:
		TcpServer(std::string ip_address, int port);
		~TcpServer();

	private:
		std::string m_ip_address{};
		int m_port{};
		int m_socket{};
		int m_new_socket{};
		long m_incomingMessage{};
		sockaddr_in m_SocketAddress;
		std::string m_serverMessage;


		int startServer();
		void closeServer();

	};
}
#endif // !INCLUDED_HTTP_TCPSERVER
