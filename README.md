# BaracudaSMTP - smtp server example (C++)
Ssl Smtp Server with c++ openssl sockets and STARTTLS

//=====================================================================
// Install
// apt-get install openssl libssl-dev g++
//
// Compile
// g++ -o BaracudaSMTP main.cpp starttls.cpp starttls.h -lssl -lcrypto -L. -I.
//
// Create TLS certs (very simple): 
// https://www.sslforfree.com/
//
// Add certificate to main folder 
// (create .pem - copy all certs,keys,ca_bundle to one file)
// certificate.pem, private.key - without password
//=====================================================================
