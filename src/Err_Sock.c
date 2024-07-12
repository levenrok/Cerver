#include "include/Err_Sock.h"

/**
 * @brief Error handler for network sockets
 *
 * This function exits the program if the socket function return value is SOCKERR(-1)
 *
 * @param sock Socket function call
 * @param msg Error message to print
 */
void err_check_sock(int sock, char const* msg) {
    if (sock == SOCKERR) {
        perror(msg);
        exit(SOCKERR);
    }
}
