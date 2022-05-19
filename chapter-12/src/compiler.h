//
// Created by roderland on 2022/5/16.
//

#ifndef clox_compiler_h
#define clox_compiler_h

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);

#endif
