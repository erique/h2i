
// This struct has alignment padding
struct StructWithAlignPad
{
    char    a_byte;         // one byte = odd size
    short   a_word;         // one word = needs alignment
    int     a_long;         // one longword = already word aligned
};

// This struct has an odd size
struct StructWithOddSize
{
    char    byte_x;
    char    byte_y;
    char    byte_z;
};

// This struct combines other structs with alignment requirements
struct StructWithAlignedStructs
{
    struct StructWithOddSize    oddStruct1;     // these two structs
    struct StructWithOddSize    oddStruct2;     // togehter will be aligned

    struct StructWithAlignPad   paddedStruct1;  // this struct is padded and aligned

    struct StructWithOddSize    oddStruct3;     // this struct is odd sized and
    struct StructWithAlignPad   paddedStruct2;  // this needs padding before
};
