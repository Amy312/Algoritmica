#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
typedef unsigned long long ull;

using namespace std;

ull n;

bool f(ull x){
    return n>x*(x+1)/2;
}

int main(){
    //input;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;

        ull ini=1,fin=n,mid=(ini+fin)/2;

        while (ini!=mid)
        {
            //cout<<"mid: "<<mid<<endl;
            if (mid*(mid+1)==2*n)
            {
                break;
            }
            if (f(mid))
            {
                
                ini=mid;
            } else
            {
                fin=mid;
            }
            mid=(ini+fin)/2;
        }

        // Matematicas :D

        // long long int x= (-1+sqrt(8*n+1))/2;
        cout<<mid<<endl;
    }
    

    return 0;
}
