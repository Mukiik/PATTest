typedef int ElemType;

typedef struct DulNode{
    ElemType data;
    struct DulNode *prior;
    struct DulNode *next;
} DulNode, *DuLinkList;