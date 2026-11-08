# tcp

An earlier experimental TCP server and networking core written in C.

**Status: discontinued, preserved for reference and learning.**

## Repository structure

- `src/io/socket.*`: socket operations.
- `src/io/conn.*`: connection handling.
- `src/io/pool.*`: experimental pooling and concurrency.
- `src/server/server.*`: server lifecycle.
- `src/error/error.*`: error handling.
- `src/main.c`: example server using port 8080.

## Build

The existing Makefile uses Clang and `ar` to build a static library and demonstration executable:

```sh
make
make fclean  # remove objects and outputs
```

Outputs are written under `bin/`.

## Why it was stopped

The project began as a way to explore socket lifecycles, low-level networking, and concurrency. Building out HTTP handling and performance-oriented architecture expanded the scope beyond the original learning exercise. Rather than presenting incomplete work as a supported library, the implementation remains here as a reference for individual ideas and experiments.

Related experiments: [choplib/http](https://github.com/choplib/http), a separate non-blocking HTTP/1.1 server, and [choplib/http-workers](https://github.com/choplib/http-workers), a worker-based TCP prototype.

## Limitations

There are no guarantees of protocol completeness, reliability, security hardening, or portability. The concurrency implementation should not be assumed correct without independent testing.

Part of [choplib](https://github.com/choplib).
