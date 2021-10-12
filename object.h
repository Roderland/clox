//
// Created by roderland on 2021/10/12.
//

#ifndef CLOX_OBJECT_H
#define CLOX_OBJECT_H

#include "common.h"
#include "value.h"

#define AS_STRING(value)        ((ObjString*)AS_OBJ(value))
#define AS_CSTRING(value)       (((ObjString*)AS_OBJ(value))->chars)

#define OBJ_TYPE(value)         (AS_OBJ(value)->type)

#define IS_STRING(value)        isObjType(value, OBJ_STRING)

typedef enum {
    OBJ_STRING,
} ObjType;

struct Obj {
    ObjType type;
    struct Obj* next;
};

struct ObjString {
    Obj obj;
    int length;
    char* chars;
};

static inline bool isObjType(Value value, ObjType type) {
    return IS_OBJ(value) && AS_OBJ(value)->type == type;
}

ObjString* copyString(const char* chars, int length);

void printObject(Value value);

ObjString* takeString(char* chars, int length);

#endif //CLOX_OBJECT_H
