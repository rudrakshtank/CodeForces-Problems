#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int total=0;
    while((sum/n)<4.50){
        sum-=a[0];
        a[0]=5;
        sum+=a[0];
        sort(a,a+n);
        total++;
    }
    cout<<total<<endl;
}
