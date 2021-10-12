//
// Created by roderland on 2021/10/12.
//

#ifndef CLOX_TABLE_H
#define CLOX_TABLE_H

#include "common.h"
#include "value.h"

typedef struct {
    ObjString* key;
    Value value;
} Entry;

typedef struct {
    int count;
    int capacity;
    Entry* entries;
} Table;

void initTable(Table* table);

void freeTable(Table* table);

bool tableSet(Table* table, ObjString* key, Value value);

void tableAddAll(Table* from, Table* to);

bool tableGet(Table* table, ObjString* key, Value* value);

bool tableDelete(Table* table, ObjString* key);

ObjString* tableFindString(Table* table, const char* chars, int length, uint32_t hash);

#endif //CLOX_TABLE_H
