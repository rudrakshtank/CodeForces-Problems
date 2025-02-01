#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int tt=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==4) tt++;
    }

    int c1=0,c2=0,c3=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==1) c1++;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==2) c2++;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==3) c3++;
    }
    if(c3!=0 && c3>=c1){
        tt+=c3;
        c1=0;
    }
    if(c3!=0 && c1>c3){
        tt+=c3;
        c1-=c3;
    }
    if(c2!=0 && c2%2==0){
        tt+=(c2/2);
        c2=0;
        if(c1>0 && c1<=4){
            tt++;
            c1=0;
        }
        else{
            int left=c1/4;
            c1-=(left*4);
            tt+=left;
            if(c1>0) tt++;
            c1=0;
        }
    }
    if(c2!=0 && c2%2!=0){
        tt+=((c2/2)+1);
        c2=0;
        c1-=2;
        if(c1>0 && c1<=4){
            tt++;
            c1=0;
        }

        else if(c1>0){
            int left=c1/4;
            c1-=(left*4);
            tt+=left;
            if(c1>00) tt++;
            c1=0;
        }
    }
    if(c1>0 && c1<=4){
        tt++;
        c1=0;
    }
    else if(c1>0){
        int left=c1/4;
        c1-=(left*4);
        tt+=left;
        if(c1>0) tt++;
        c1=0;
    }
    cout<<tt<<endl;
}
