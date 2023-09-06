#include <stdio.h>
struct stack{
    int size;
    int top;
    int *s;
};
void push(struct stack *st,int x){
    // int x=-1;
    if (st->top==st->size-1)
    {
        printf("Overflow ");
    }
    else{
        st->top++;
        x=st->s[st->top];
    }
    return x;
}
void display(struct stack  st){
    int i;
    for ( i = st.top; i>=0; i--)
    {
        printf("%d",st.s[i]);
        printf("\n");
    }
    
}
int main(){
    struct stack st;
    st.size=10;
    st.top=-1;
    push(&st,40);
    push(&st,20);
    push(&st,30);
    display(st);
}