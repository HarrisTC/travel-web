#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
int main(){

    std::vector<int> a;
    a.push_back(1);
    a.push_back(9);
    a.push_back(0);
    std::sort(a.begin(),a.end(),std::greater<int>());

    for(auto i : a)
        std::cout<<i<<std::endl;
    return 0;
}