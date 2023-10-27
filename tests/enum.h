// A simple enum

enum SimpleEnum
{
    EnumValue0,             /* The first enum */
    EnumValue1,             /* The second enum */
    EnumValue2,
    EnumValue400 = 400,     /* Specific value */ 
    EnumValue401,
    EnumValueMAX = 0xffffffff,     /* Max value */ 
};

typedef enum SimpleEnum SimpleEnumType;

struct StructWithEnum
{
    enum SimpleEnum enumValue1;   // storage type should be ULONG
    SimpleEnumType  enumValue2;   // storage type should be ULONG
};
