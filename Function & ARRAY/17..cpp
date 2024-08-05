#include<stdio.h>


struct Structure {
    int a;
    float b;
    char c;
};

union Union {
    int a;
    float b;
    char c;
};

int main() {
    
    struct Structure structVar;
    union Union unionVar;

    printf("Memory allocated for structure: %lu bytes\n", sizeof(structVar));

    
    printf("Memory allocated for union: %lu bytes\n", sizeof(unionVar));
 
    structVar.a = 5;
    structVar.b = 2.5;
    structVar.c = 'A';

    unionVar.a = 10;
    unionVar.b = 20.5;
    unionVar.c = 'A';

    
    printf("Structure members:\n");
    printf("a: %d\n", structVar.a);
    printf("b: %f\n", structVar.b);
    printf("c: %c\n", structVar.c);

    printf("Union members:\n");
    printf("a: %d\n", unionVar.a);
    printf("b: %f\n", unionVar.b);
    printf("c: %c\n", unionVar.c);

    return 0;
}
