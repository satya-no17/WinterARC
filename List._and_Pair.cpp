#include <iostream>
#include<list>
#include<vector>
using namespace std;
//list has almost same feature as vector with some additional like push_front pop_front
//another difference is list is implemented as a doubly linked list and vector is implemented as dynamic array
int main() {
    list<int>l={1,2,3,4,5};
    l.push_back(2);
    for(int val:l){
        cout<<val<<" ";
    }

    //lets talk about Pair
    //its inbuilt in normal cpp in this we can create a pair of 2 things for ex
    pair<string,int>p={"Satya",18};
    cout<<"1st element = "<<p.first<<"  2nd element = "<<p.second;
    //we can also create a vector of pair

    vector<pair<string,int>>vec = {{"satya",18},{"patrika",20}};
    for(auto val:vec){
        cout<<val.first<<"  "<<val.second<<endl;
    }

    return 0;
}