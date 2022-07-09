#include "fncl_runtime.h"
#include "fncl_mem.h"

static fncl_runtime local_runtime;

static void initialize(){
    static bool is_runtime_initialized = false;
    if (is_runtime_initialized == false) {
        is_runtime_initialized = true;
        fncl_object_l_init(&local_runtime.objects);
        kmstr_l_init(&local_runtime.paths);
    }
}

const fncl_runtime* fncl_get_runtime(){
    initialize();
    return &local_runtime;
}

void fncl_runtime_add_lookup_path(const char *path){
    initialize();
    size_t path_len = strlen(path);
    char *new_path = FNCL_MALLOC(path_len + 1);
    memcpy(new_path, path, path_len+1);
    kmstr_l_push(&local_runtime.paths, new_path);
}
