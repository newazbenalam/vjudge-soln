#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Test no,: ";
  cin >> n;
  cin.ignore();
  for (int i =0 ; i < n; i++){
    int x,y;
    cin >> x >> y;
    cout << (x + y) << endl;
  }
  return 0;
}
