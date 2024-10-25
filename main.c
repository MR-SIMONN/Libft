#include <string.h>
#include <stdio.h>

int main() {
    char dst[22] = "dstn";
     char *src = "opining";
    size_t size = 23;
    size_t rs = strlcat(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Concatenated string: %ld\n", rs);
    return 0;
}