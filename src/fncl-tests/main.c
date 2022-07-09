#include <stdio.h>
#include "fncl_runtime.h"

void test_add_lookup_path() {
    fncl_runtime_add_lookup_path("testfiles1");
    fncl_runtime_add_lookup_path("testfiles2");
    const fncl_runtime *runtime = fncl_get_runtime();
    assert(runtime->paths.size == 2);
}

int main() {
    test_add_lookup_path();
    printf("All tests run successfully!\n");
    return 0;
}
