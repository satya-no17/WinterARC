#include <iostream>
#include <vector>
using namespace std;
int bookalloc(vector<int>books,int stu){
    int sum =0;
    int ans=-1;
    for(int i=0;i<books.size();i++){
        sum += books[i];
    }
    int st=0,end=sum,mid;
    if (stu<=books.size()){
        while(st<end){
            mid = st+(end-st)/2;
            if ()
        }
    }
    return ans;
}
int main() {
    
    return 0;
}