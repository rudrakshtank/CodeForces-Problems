#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(is_sorted(v.begin(),v.end())) cout<<"yes"<<endl<<1<<" "<<1<<endl;
    else{
        int si,ei,cu=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                if(cu==0) si=i;
                cu++;
            }
            else{
                if(cu!=0){
                    ei=i;
                    break;
                }
            }
            ei=i+1;
        }
        reverse(v.begin()+si, v.begin()+ei+1);
        if(is_sorted(v.begin(),v.end())) cout<<"yes"<<endl<<si+1<<" "<<ei+1;
        else cout<<"no"<<endl;
    }
}
