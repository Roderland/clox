My implementation of the compiler & bytecode VM for Lox language.

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