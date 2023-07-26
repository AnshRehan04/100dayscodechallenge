#include <stdio.h>
struct rectangle{
    int length;
    int breadth;
};
void fun(struct rectangle *p){
    p->length=20;
    printf("Length is %d\n breadth is %d\n",p->length,p->breadth);  //Call by address
}
int main(){
    struct rectangle r={10,5};
    fun(&r);
    printf("Length is %d\n breath is %d\n",r.length,r.breadth);
}