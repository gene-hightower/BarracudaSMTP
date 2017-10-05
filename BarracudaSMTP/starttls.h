/*
Ssl Smtp Server with c++ openssl sockets
All rights reservered Marcin Łukaszewski <hello@breakermind.com>
*/
#ifndef STARTTLS_H
#define STARTTLS_H

#include <errno.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <string>
#include <cstring>
#include <vector>
#include <unistd.h>
#include <iostream>
// kill
#include <signal.h>

using namespace std;

class Ssl{
    public:
    	Ssl();
    	SSL_CTX *create_context();
    	void init_openssl();
        void cleanup_openssl();
        void configure_context(SSL_CTX *ctx, std::string Certificate, std::string CertificateKey);
        void Start(std::string Certificate, std::string CertificateKey,int client);
        void ServerLoop(SSL *ssl, string ipAddress);
        bool Contain(std::string str,std::string search);
        void sslError(SSL *ssl, int received);
};

#endif // BREAKERMINDSSLSERVER_H
