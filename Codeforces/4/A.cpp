#include<iostream>
void solve() {
  int w;
  std::cin >> w;
  std::cout << ((w & 1 || w == 2) ? "NO" : "YES") << std::endl;
}
int main() {
  solve();
}
