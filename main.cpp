#include <iostream>

using namespace std;

template<typename T>
void printSize(string t)
{
  cout << sizeof(T);
}

int main() {
  string tipo;
  cin >> tipo;

  if (tipo == "char")
  {
    printSize<char>(tipo);
  }
  else if (tipo == "int")
  {
    printSize<int>(tipo);
  }
  else if (tipo == "short")
  {
    printSize<short>(tipo);
  }  
  else if (tipo == "float")
  {
    printSize<float>(tipo);
  }  
  else if (tipo == "double")
  {
    printSize<double>(tipo);
  }
  else if (tipo == "long")
  {
    printSize<long>(tipo);
  }  
    return 0;
}