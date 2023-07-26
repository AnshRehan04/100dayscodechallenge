#include <stdio.h>
// #include <iostream>
struct rectangle{
    int length;
    int breadth;
};

void fun(struct rectangle r){
    r.length=20;
    printf("Length is %d\n breadth is %d\n",r.length,r.breadth);  //Call By Value
};
int main(){
    struct rectangle r={10,5};
    printf("Length is %d\nBreadth is %d\n",r.length,r.breadth);
    fun(r);
}