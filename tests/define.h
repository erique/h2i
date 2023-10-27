
#define SOME_DEFINE 3
#define ANOTHER_DEFINE 0x33
#define YET_ANOTHER_DEFINE 333
#define A_STRING_DEFINE "foo"

// const value defines (supported)
#define COMBINED_DEFINE_1 (1 << SOME_DEFINE)
#define COMBINED_DEFINE_2 (SOME_DEFINE * ANOTHER_DEFINE)

// complex C macros (unsupported)
// #define COMBINED_DEFINE_3(x) (YET_ANOTHER_DEFINE & x)
// #define COMPLEX_DEFINE_3() do{ }while(0)
