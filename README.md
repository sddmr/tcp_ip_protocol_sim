---

# TCP/IP Protocol Stack Simulation in C

This project is a simple simulation of the TCP/IP protocol stack implemented in C. It demonstrates the creation and handling of IP and TCP headers, including calculation of checksums, and prints out the details of these headers in a readable format.

## Features

* Implementation of IPv4 header structure with fields like version, header length, total length, identification, flags, TTL, protocol, header checksum, source and destination IPs.
* TCP header structure implementation with fields such as source port, destination port, sequence number, acknowledgment number, flags, window size, checksum, and urgent pointer.
* Functions to initialize headers and compute checksums.
* Output demonstrating the header fields and checksum values.
* Designed to be compiled and run easily on macOS without requiring root privileges.

## Usage

1. Clone the repository.
2. Build using CMake or your preferred C compiler.
3. Run the executable to see simulated packet headers and checksums.

## Purpose

This project serves as an educational tool for understanding low-level networking concepts and TCP/IP protocol internals through hands-on C programming.

---
