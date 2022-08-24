# Clox
My implementation of the compiler & bytecode VM for Lox language.

## Try
```
#!./clox

class A {
    init() {
        this.name = "小刚";
    }
    printf() {
        print this.name;
    }
    getPrintf() {
        return this.printf;
    }
    getInnerFun() {
        fun inner() {
            print this.age;
        }
        return inner;
    }
}

class Person < A {
    init() {
        this.name = "";
        this.age = 0;
        this.friends = [0];
    }
    #printf() {
    #    print this.name;
    #}
}

var person = Person();
person.name = "小红";
person.age = 17;
person.printf();

person.getPrintf()();
person.getInnerFun()();

var f1 = Person();
f1.name = "👬";
f1.age = 18;

person.friends[0] = f1;

for (var i = 0; i < person.friends[]; i+=1) {
    print person.friends[];
    var p = person.friends[i];
    p.getPrintf()();
    p.getInnerFun()();
}
```
```
小红
小红
17
1
👬
18
```


## New Feature
#### [Break & Continue](https://github.com/Roderland/clox/tree/feat_break%26continue)
```
for (var i = 0; i < 10; i = i + 1) {
   if (i == 3) continue;
   if (i == 6) break;
   print i; 
}
```
#### [Plus-Assign](https://github.com/Roderland/clox/tree/feat_plus_equal)
```
var a = 1;
a += 1; print a;
a -= 1; print a;
a *= 2; print a;
a /= 2; print a;
```
#### [List](https://github.com/Roderland/clox/tree/feat_list)
```
// you can declare a list like this:
var foo = [nil, true, 123, "hello"];
var bar = [];

// print your list
print foo;
print bar;

// take a list -> [start:end] [start:] [:end] [:]
// only support -1 as end 
// not support other negative numbers
bar = foo[1:-1];
print bar;

// get an element from a list
foo[0] = bar;
print foo;
print foo[0][1];
print foo[0][0][1];

// bar[] return the length of bar
for (var i = 0; i < bar[]; i = i + 1) {
    print bar[i];
}

// todo: delete
// todo: append
```
