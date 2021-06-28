
int xfunc(int a, int b);
int yfunc(int a, int b);

int main()
{
  int a = 2;
  int b = 4;
  
  a = xfunc(a, b);
  b = yfunc(a, b);
  
  return 0;
}

int xfunc(int a, int b){
  return a*b;
}

int yfunc(int a, int b){
  return xfunc(a, b);
}