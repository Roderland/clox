//
// Created by roderland on 2021/10/10.
//

#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, count) \
    reallocate(pointer, sizeof(type) * count, 0)

#define ALLOCATE(type, count) \
    (type*)reallocate(NULL, 0, sizeof(type) * (count))

#define FREE(type, pointer) \
    reallocate(pointer, sizeof(type), 0)

void *reallocate(void *pointer, size_t oldSize, size_t newSize);

void freeObjects();

#endif //CLOX_MEMORY_H
