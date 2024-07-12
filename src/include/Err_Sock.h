#ifndef __ERR_SOCK__
#define __ERR_SOCK__

#include <stdio.h>
#include <stdlib.h>

#define SOCKERR (-1)

/**
 * @brief Error handler for network sockets
 *
 * @param sock Socket function call
 * @param msg Error message to print
 */
void err_check_sock(int sock, char const* msg);

#endif  // __ERR_SOCK__
