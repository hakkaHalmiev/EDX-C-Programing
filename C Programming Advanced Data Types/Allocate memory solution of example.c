#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    struct point * poly;
    int N;
    scanf("%d",&N);
    poly=(struct point*)malloc(N*sizeof(struct point));
    initializePoly(poly,N);
    printPoly(poly,N);
    free(poly);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}
void initializePoly(struct point * poly, int N)
{
    int i=0;
    for(i=0;i<N;i++)
    {
        poly[i].x=-i;
        poly[i].y=(-i*-i);
        
    }
}
// Write your initializePoly() function here
