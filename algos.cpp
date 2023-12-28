#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // std::vector<char> a;

    // a.push_back('b');
    // a.push_back('a');
    // a.push_back('E');
    // a.push_back('A');
    // a.push_back('f');
    // a.push_back('e');

    // stable_sort
    // stable_sort(a.begin(), a.end());
    // std::vector<char>::iterator it = a.begin();
    // for (; it != a.end(); it++) {
    //     std::cout << *it << std::endl;
    // }

    // lower_bound
    // std::vector<char>::iterator it = lower_bound(a.begin(), a.end(), 'a');
    // if (it != a.end())
    //     std::cout << *it << std::endl;

    // upper_bound
    // std::vector<char>::iterator it = upper_bound(a.begin(), a.end(), 'a');
    // if (it != a.end())
    //     std::cout << *it << std::endl;

    // equal_range
    // std::vector<int> vec = {1, 2, 4, 4, 5, 6, 7};
    // std::pair<std::vector<int>::iterator, std::vector<int>::iterator> range = std::equal_range(vec.begin(), vec.end(), 4);
    // for (std::vector<int>::iterator it = range.first; it != range.second; ++it) {
    //     std::cout << *it << " ";
    // }

    // nth_elements
    // std::vector<int> vec;
    // for (size_t i = 0; i < 20; i++) {
    //     vec.push_back(rand() % 100);
    // }
    // std::vector<int>::iterator nth = vec.begin() + vec.size() - 4;
    // std::nth_element(vec.begin(), nth, vec.end());
    // std::cout << *nth << std::endl;
    // for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    //     std::cout << *it << std::endl;
    

    // merge
    // std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());

    // set_union
    // std::vector<int> vec1 = {1, 2, 3, 4, 5};
    // std::vector<int> vec2 = {3, 4, 5, 6, 7};
    // std::vector<int> result(vec1.size() + vec2.size());
    // std::set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());
    // for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++) {
    //     std::cout << *it << std::endl;
    // }

    // transform 
    // std::transform(input.begin(), input.end(), result.begin(), [](int x) { return x * x; });

    
}