#define AO_REQUIRE_CAS
#include <atomic_ops.h>

int main() {
    void *addr;
    AO_t foo;
    AO_fetch_and_add1_full((volatile AO_t *)addr);
    AO_fetch_and_sub1_full((volatile AO_t *)addr);
    AO_fetch_and_add_full((volatile AO_t *)addr, foo);
    AO_compare_and_swap_full((volatile AO_t *)addr, foo, foo);
    AO_fetch_compare_and_swap_full(addr, foo, foo);
    AO_nop_full();
    AO_store_full((volatile AO_t *)addr, foo);
    AO_load_full((volatile AO_t *)addr);

    return 0;
}
