#include <stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int area( struct rectangle r){
    return r.length*r.breadth;
}
int perimeter(struct rectangle r){
    return 2*(r.breadth+r.length);
}
int main(){
    struct rectangle r={0,0};
    printf("Enter Length and Breadth ");
    scanf("%d %d",&r.length,&r.breadth);
    int a=area(r);
    int p=perimeter(r);
    printf("Area is %d\n",a);
    printf("Perimeter is %d",p);

}
