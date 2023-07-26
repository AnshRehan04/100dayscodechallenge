#include <stdio.h>
struct rectangle{
    int length;
    int breadth;
};
void intialize(struct rectangle  *r, int l,int b){
    r->length=l;
    r->breadth=b;
}
int area( struct rectangle r){
    return r.length*r.breadth;
}
int main(){
    struct rectangle r;
    intialize(&r,10,20);
    printf("Area is %d",area(r));

}