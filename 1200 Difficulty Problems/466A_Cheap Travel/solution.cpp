#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int tm=0;
    int minab,nco=0;
    while(nco<n){
        if(n-nco>=m) minab=min(a,(b/m));
        if(n-nco<m){
            minab=min(a,b);
            if(tm==0){
                int c=n*a;
                int newmin=min(c,b);
                tm+=newmin;
                if(newmin==c) nco+=c;
                else nco+=m;
            }
            else{
                tm+=minab;
                if(minab==a) nco++;
                else nco+=m;
            }
        }
        if(minab==a && n-nco>=m){
            tm+=a;
            nco++;
        }
        else if(minab==(b/m) && n-nco>=m){
            tm+=b;
            nco+=m;
        }
    }
    cout<<tm<<endl;
}
