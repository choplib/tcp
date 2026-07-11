#include <netdb.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "error/error.h"
#include "server/server.h"

#define DEBUG

int main() {
	hcb_server_t *server = hcb_new_server("8080", hcb_new_pool_config(32, 32));
	hcb_server_start(server);
	if (hcb_error_get_is_error(hcb_server_get_error(server))) {
		printf("Error occured.");
	}
	hcb_server_free(server);
}
