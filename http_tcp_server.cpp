#include "http_tcp_server.h"
#include <WinSock2.h>
#include <iostream>
namespace
{
	void log(const std::string& message)
	{
		std::cout << message << std::endl;
	}

	void exitWithError(const std::string& errorMessage)
	{
		log("ERROR: " + errorMessage);
		exit(1);
	}
}

namespace http
{
	TcpServer::TcpServer(std::string ip_address, int port)
		: m_ip_address {ip_address}, m_port {port}
	{

	}

	TcpServer::~TcpServer()
	{

	}

	int TcpServer::startServer()
	{
		if (WSAStartup(MAKEWORD(2,0), )
	}
}