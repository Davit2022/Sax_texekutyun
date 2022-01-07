 #include<iostream> 
  func(int a);
  
  int main() {
      int a[12];
      std::cout << "Enter elements 12: ";
      func(a);
  
  return 0;
  }
  
  int func(int a) {
      for (int i=0; i<12; i++)
      {
          std::cin >> a[i];
          if((i+1)%3==0)
          {
              a[i] = 10;
          }
  
      }
      std::cout << std::endl;
      for(int i=0; i<12; i++ )
      {
          std::cout << a[i] <<" ";
      }
      return 0;
  }
