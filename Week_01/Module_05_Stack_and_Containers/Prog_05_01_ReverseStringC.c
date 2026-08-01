#include <stdio.h>
#include <stdbool.h>
typedef struct  stack
{
    char data[100];
    int top;
}stack;
bool empty(stack *p){
    return (p->top==-1);
}
char top(stack *p){
    return (p->data[p->top]);
}
void push(stack *p,char x){
    p->data[++(p->top)]=x;
}
void pop(stack *p){
    if(!empty(p)) (--(p->top));
}
int main(){
    stack s;
    s.top=-1;
    char ch,str[10]="ABCDE";
    int i,len=sizeof(str);
    for(int i=0;i<len;i++){
        push(&s,str[i]);
    }
    print("Reversed string :");
    while(!(empty(&s))){
        printf("%c",top(&s));
        pop(&s);
    }
}
