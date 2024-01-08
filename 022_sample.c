#include<stdio.h>
int top =0;
int stac[5];
void push(int x);
void pop(int x);
void disp_stac();
int main(){
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  disp_stac();
  pop(5);
  pop(4);
  disp_stac();
  return 0;
}

void push(int x){
  stac[top++]=x;
}
void pop(int x){
  stac[top--]=x;
}
void disp_stac(){
  for(int i=0;i<top;i++){
    printf("%d",stac[i]);
  }
  printf( "\n");
}
