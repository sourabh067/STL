#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Double(int x){
    cout<< 2*x << " " ;
}

int main() {
    // STL
    // for_each
    
    vector<int> v={2,4,6,8};
    for_each(v.begin(),v.end(),Double);  // all elements of `v` are run passed as arguments for `Double` function one by one
    // for_each is a loop

    return 0;
}
