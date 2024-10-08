#include <libsocket/libinetsocket.h>
#include <pthread.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#include "include/Err_Sock.h"

void* handle_client(void* arg);

int main(void) {
    int server_socket, client_socket;
    FILE* client_fd;

    server_socket = create_inet_server_socket("127.0.0.1", "5000", LIBSOCKET_TCP, LIBSOCKET_IPv4, 0);

    sleep(1);

    err_check_sock(server_socket, "Failed to create Server Socket!");

    while (true) {
        printf("Waiting for connections...\n");
        err_check_sock(client_socket = accept_inet_stream_socket(server_socket, 0, 0, 0, 0, 0, 0),
                       "Failed to accept Client!");
        if (client_socket >= 0) {
            printf("Connected!");
            client_fd = fdopen(client_socket, "r+");
            break;
        }
    }

    pthread_t client_thread;
    pthread_create(&client_thread, NULL, handle_client, (void*)client_fd);
    pthread_detach(client_thread);

    fclose(client_fd);
    destroy_inet_socket(client_socket);
    destroy_inet_socket(server_socket);
    exit(EXIT_SUCCESS);
}

void* handle_client(void* arg) {
    return NULL;
}