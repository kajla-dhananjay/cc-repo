#include<iostream>
void solver() {
  std::string s;
  std::cin >> s;
  if(s.size() > 10) {
    std::cout << s.front() << std::to_string(s.size()-2) << s.back() << std::endl;
  } else {
    std::cout << s << std::endl;
  }
  return;
}
void solve() {
  int T;
  std::cin >> T;
  while(T--) {
    solver();
  }
}
int main() {
  solve();
}
