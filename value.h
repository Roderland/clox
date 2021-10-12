//
// Created by roderland on 2021/10/10.
//

#ifndef CLOX_VALUE_H
#define CLOX_VALUE_H

#include "common.h"

#define NIL_VAL                 ((Value){VAL_NIL, {.number = 0}})
#define BOOL_VAL(value)         ((Value){VAL_BOOL, {.boolean = value}})
#define NUMBER_VAL(value)       ((Value){VAL_NUMBER, {.number = value}})
#define OBJ_VAL(object)         ((Value){VAL_OBJ, {.obj = (Obj*)object}})

#define AS_BOOL(value)          ((value).as.boolean)
#define AS_NUMBER(value)        ((value).as.number)
#define AS_OBJ(value)           ((value).as.obj)

#define IS_BOOL(value)          ((value).type == VAL_BOOL)
#define IS_NIL(value)           ((value).type == VAL_NIL)
#define IS_NUMBER(value)        ((value).type == VAL_NUMBER)
#define IS_OBJ(value)           ((value).type == VAL_OBJ)

typedef enum {
    VAL_BOOL,
    VAL_NIL,
    VAL_NUMBER,
    VAL_OBJ,
} ValueType;

typedef struct Obj Obj;
typedef struct ObjString ObjString;

typedef struct {
    ValueType type;
    union {
        bool boolean;
        double number;
        Obj* obj;
    } as;
} Value;

typedef struct {
    int count;
    int capacity;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);

void writeValueArray(ValueArray *array, Value value);

void freeValueArray(ValueArray *array);

void printValue(Value value);

bool valuesEqual(Value a, Value b);

#endif //CLOX_VALUE_H
