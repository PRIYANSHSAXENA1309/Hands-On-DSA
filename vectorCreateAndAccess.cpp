#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3(5, -1);
    cout<<vec1.size()<<"\n";
    cout<<vec1.capacity()<<"\n";
    for(int i=0; i<vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
    cout<<"\n";
    for(int i : vec3){
        cout<<i<<" ";
    }
    cout<<"\n";
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(5);
    cout<<vec1.front()<<"\n";
    cout<<vec1.back()<<"\n";
    cout<<vec1.at(1)<<"\n";
    vec1.pop_back();
    vec1.pop_back();
    vec1.pop_back();
    cout<<vec1.size()<<"\n";
    cout<<vec1.capacity()<<"\n";
    return 0;
}