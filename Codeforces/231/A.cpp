#include<iostream>
void solve() {
  int n, ans = 0;
  std::cin >> n;
  while(n--) {
    int a, b, c;
    std::cin >> a >> b >> c;
    ans = ans + (a + b + c >= 2);
  }
  std::cout << ans << std::endl;
}
int main() {
  solve();
}
