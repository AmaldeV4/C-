# include <iostream>
using namespace std;

int main() {
  int x;
  int y;

  cout << "x = ";
  cin >> x;

  cout << "y = ";
  cin >> y;

  if(x > y)
  {
    cout << x << " is bigger than " << y;
  }
  else if (x < y)
  {
    cout << x << " is smaller than " << y;
  }
  else
  {
    cout << x << " is equal to " << y;
  }
  
  
  return 0;
}
