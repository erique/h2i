// A 64bit struct
struct StructWithTwoInts
{
    int IntA;
    int IntB;
};

struct StructWithArrays
{
    char                        byteBuffer[10];     // 10 element char array
    int                         longBuffer[10];     // 10 element integer array
    char*                       ptrBuffer[10];      // 10 element pointer array
    struct StructWithTwoInts    structBuffer[10];   // 10 element array of structs
};
