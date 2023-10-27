
// A couple of typedefs
typedef unsigned int UINT;          // integer
typedef short BUFFER[1024];         // constant array
typedef int(*FUNC)(int a, int b);   // function pointer

// A struct typedef of a struct using typedefs
typedef struct TypedefStruct
{
    UINT    integer;    // this is a ULONG
    BUFFER  buffer;     // this is an ARRAY
    FUNC    func;       // this is a FPTR
} TypedefStructType;

// A struct using a struct typedef
struct ThisStruct
{
    void*   aPointer;               // this is a APTR
    TypedefStructType thatStruct;   // this is a STRUCT
};
