Converts C-structs to Amiga OS assembler structure defines.

`h2i.py [-h] [-t] filename [args ...]`

Uses [libclang](https://clang.llvm.org/docs/LibClang.html) to convert a C struct like
```
/*
 *   A simple struct with comments
 */

typedef struct SimpleStruct
{
    int value1;     // this is a comment
    int value2;     // this is another comment
} SimpleStructType;
```
to an assembly include file like
```
    IFND    TESTS_SIMPLESTRUCT_I
TESTS_SIMPLESTRUCT_I SET 1

    NOLIST
    INCLUDE "exec/types.i"
    LIST

;/*
;  *   A simple struct with comments
;  */
    STRUCTURE   SimpleStruct,0
        LONG    value1                 ; this is a comment
        LONG    value2                 ; this is another comment
    LABEL       SimpleStruct_sizeof    ; 8 bytes

    ENDC    ; TESTS_SIMPLESTRUCT_I
```
