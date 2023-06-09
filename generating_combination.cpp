// using next_permutation
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, r;
    std::cin >> n;
    std::cin >> r;

    std::vector<bool> v(n);
    std::fill(v.end() - r, v.end(), true);

    do {
        for (int i = 0; i < n; ++i) {
            if (v[i]) {
                std::cout << (i + 1) << " ";
            }
        }
        std::cout << "\n";
    } while (std::next_permutation(v.begin(), v.end()));
    return 0;
}

// using prev_permutation

// #include <iostream>
// #include <algorithm>
// #include <vector>

// int main() {
//   int n, r;
//   std::cin >> n;
//   std::cin >> r;

//   std::vector<bool> v(n);
//   std::fill(v.begin(), v.begin() + r, true);

//   do {
//       for (int i = 0; i < n; ++i) {
//           if (v[i]) {
//               std::cout << (i + 1) << " ";
//           }
//       }
//       std::cout << "\n";
//   } while (std::prev_permutation(v.begin(), v.end()));
//   return 0;
// }

// Reference
// https://stackoverflow.com/questions/12230763/prev-permutation-vs-next-permutation-difficulty
