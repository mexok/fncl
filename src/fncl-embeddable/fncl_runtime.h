#ifndef FNCL_RUNTIME_H
#define FNCL_RUNTIME_H

#include "fncl_object.h"
#include "kmds.h"

typedef struct {
    kmstr_l paths;
    fncl_object_l objects;
} fncl_runtime;

const fncl_runtime* fncl_get_runtime();
void fncl_runtime_add_lookup_path(const char *path);

#endif
