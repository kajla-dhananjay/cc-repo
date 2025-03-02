#include<iostream>
#include<limits>
int main() {
  int n, k, k_val = std::numeric_limits<int>::lowest(), ans = 0, z = 0;
  std::cin >> n >> k;
  for(int i = 0; i < n; i++) {
    std::cin >> z;
    if(i == k-1) {
      k_val = z;
    }
    if(z >= k_val && z > 0) {
      ans++;
    }
  }
  std::cout << ans << std::endl;
}
