#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> vec_merge(std::vector<int> left, std::vector<int> right) {
    std::vector<int> ret;
    while (left.size() || right.size()) {
        if (!left.size() && right.size()) {
            ret.push_back(right[0]);
            right.erase(right.begin(), right.begin() + 1);
        } else if (left.size() && !right.size()) {
            ret.push_back(left[0]);
            left.erase(left.begin(), left.begin() + 1);
        }
        else if (left[0] < right[0]) {
            ret.push_back(left[0]);
            left.erase(left.begin(), left.begin() + 1);
        }
        else {
            ret.push_back(right[0]);
            right.erase(right.begin(), right.begin() + 1);
        }
    }
    return (ret);
}

std::vector<int> vec_split(std::vector<int> &vec) {
        int mid = vec.size() / 2;

        if (vec.size() < 2)
            return (vec);
        std::vector<int> other;
        other.insert(other.begin(), vec.begin(), vec.begin() + mid);
        vec.erase(vec.begin(), vec.begin() + mid);
        return (vec_merge(vec_split(other), vec_split(vec)));
}

 int main() {

    int N = 12;
    int arr[12] = {2, 6, 9, 77, -1, 3, 8, 23, 76, 1, 4, 7};

    // merge sort O(n log n) complexity
    std::vector<int> vec;
    for (int i = 0; i < N; i++)
        vec.push_back(arr[i]);
    std::vector<int> a = vec_split(vec);
    std::vector<int>::iterator it = a.begin();
    for (; it != a.end() ; it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    return (0);
 }