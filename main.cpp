#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

int main() {
    std::vector<int> v{5, 3, 9, 1, 4};
    std::sort(v.begin(), v.end());            // 1,3,4,5,9
    int sum = std::accumulate(v.begin(), v.end(), 0);
    assert(sum == (1+3+4+5+9));               // 22
    std::cout << "[C++] sorted_first=" << v.front()
              << " sum=" << sum << " OK\n";
    return 0;
}
