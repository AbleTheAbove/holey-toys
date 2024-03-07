typedef enum OpType_e
{
    Empty = 0,
    R,
    RR,
    RRR,
    RRRR,
    Rx8,
    Rx16,
    Rx32,
    Rx64,
    RRx8,
    RRx16,
    RRx32,
    RRx64,
    RRs32,
    RRs64,
    RRu8,
    RRu16,
    RRu64,
    r16,
    r32,
    RRr16,
    RRr32,
    RRr16u16,
    RRr32u16,
    RRu64u16,
} OpType;
// R -> register,
// 1 -> Xi8, 2 -> Xi16, 4 -> Xi32, 8 -> Xi64,
// b -> Si8, h -> Si16, w -> Si32, d -> Si64,
// B -> Ui8, H -> Ui16, W -> Ui32, D -> Ui64,
// o -> 16 bit relative offset,
// O -> 32 bit relative offset,

const char *TYPE_STR[] = {
    "",
    "R",
    "RR",
    "RRR",
    "RRRR",
    "R1",
    "R2",
    "R4",
    "R8",
    "RR1",
    "RR2",
    "RR4",
    "RR8",
    "RRw",
    "RRd",
    "RRB",
    "RRH",
    "RRD",
    "o",
    "O",
    "RRo",
    "RRO",
    "RRoH",
    "RROH",
    "RRDH",
};
