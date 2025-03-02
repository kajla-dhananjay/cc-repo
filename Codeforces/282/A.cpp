#include<iostream>
void solver(int &y){
  std::string s;
  std::cin >> s;
  y = y + ((s[1] == '+') ? 1 : -1);
}
int main() {
  int n, x = 0;
  std::cin >> n;
  while(n--){
    solver(x);
  }
  std::cout << x << std::endl;
}
