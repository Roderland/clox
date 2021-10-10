//
// Created by roderland on 2021/10/10.
//

#ifndef CLOX_VALUE_H
#define CLOX_VALUE_H

#include "common.h"

typedef double Value;

typedef struct {
    int count;
    int capacity;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);

void writeValueArray(ValueArray *array, Value value);

void freeValueArray(ValueArray *array);

void printValue(Value value);

#endif //CLOX_VALUE_H
