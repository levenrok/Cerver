#include <libsocket/libinetsocket.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    int server_socket;

    server_socket = create_inet_server_socket("127.0.0.1", "5000", LIBSOCKET_TCP, LIBSOCKET_IPv4, 0);

    sleep(1);

    destroy_inet_socket(server_socket);
    exit(EXIT_SUCCESS);
}