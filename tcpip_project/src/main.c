#include <stdio.h>
#include <stdint.h>
#include "ip.h"
#include "tcp.h"
#include <arpa/inet.h>


int main() {
    ip_header_t ip_hdr;
    tcp_header_t tcp_hdr;

    // Örnek IP adresleri: 192.168.1.2 ve 192.168.1.10
    uint32_t src_ip = 0xC0A80102;
    uint32_t dst_ip = 0xC0A8010A;

    ip_init_header(&ip_hdr, src_ip, dst_ip, sizeof(tcp_header_t));
    tcp_init_header(&tcp_hdr, 12345, 80);

    printf("IP header checksum: 0x%X\n", ntohs(ip_hdr.header_checksum));
    printf("TCP source port: %d\n", ntohs(tcp_hdr.source_port));
    printf("TCP destination port: %d\n", ntohs(tcp_hdr.dest_port));

    return 0;
}
