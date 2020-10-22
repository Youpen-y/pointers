#include <iostream>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

using namespace std;

void Swap1(int,int);   
void Swap2(int *,int *);
void Swap3(int &,int &);

void Swap1(int x,int y){
  auto temp = x;
  x = y;
  y = temp;
}

void Swap2(int* x,int* y){
  auto temp = *x;
  *x = *y;
  *y = temp;
}

void Swap3(int &x,int &y){
  auto temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a = 25, b = 11;  
  int temp;  
  cout<<"a = "<<a<<", b = "<<b<<endl;
  SWAP(a,b,temp);
  cout<<"a = "<<a<<", b = "<<b<<endl;
  Swap1(a,b);
  cout<<"a = "<<a<<", b = "<<b<<endl;
  Swap2(&a,&b);
  cout<<"a = "<<a<<", b = "<<b<<endl;
  Swap3(a,b);
  cout<<"a = "<<a<<", b = "<<b<<endl;
  return 0;
}
