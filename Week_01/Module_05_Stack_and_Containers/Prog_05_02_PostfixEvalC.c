#include <stdio.h>
#include <stdbool.h>
typedef struct stack{
    char data[100];
    int top;
} stack;
bool empty(stack *p){
    return p->top==-1;
}
char top(stack *p){
    return p->data[p->top]; 
}
void push(stack *p,char x){
    p->data[++(p->top)]=x;
}
void pop(stack *p){
    if(!(empty(p))) (--p->top);
}
int main(){
    stack s;s.top=-1;
    char postfix[]={'1','2','3','*','+','4','-'};
    for(int i=0;i<sizeof(postfix);i++){char ch=postfix[i];
        if(isdigit(ch)) push(&s,ch-'0') ;
        else{
            int op2=top(&s); pop(&s);
            int op1=top(&s); pop(&s);
            switch(ch)
            {
                case '+': push(&s,op2+op1); break;
                case '-': push(&s,op2-op1); break;
                case '*': push(&s,op2*op1); break;
                case '/': push(&s,op2/op1); break;
            }

        }
    }printf("Evaluate :%d",top(&s));
}