#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n, p;
    cin>>n>>p;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++)
    cin>>arr[i];

    sort(arr.rbegin(), arr.rend());

    //cout<<"displaying sorted array"<<endl;
    //for(int i = 0; i < n; i++)
    //cout<<arr[i]<<" ";
    //cout<<endl;
    
    ll teamCount = 0;
    ll i = 0;
    ll j = n - 1;
    while(i <= j){
        if(arr[i] > p){
            //cout<<"independent team ->"<<arr[i]<<endl;
            teamCount++;
            i++;
        }
        else{
            ll temp = p / arr[i];
            //cout<<"value of temp ->"<<temp<<endl;
            //cout<<"value of j - i ->"<<(j-i)<<endl;
            if(temp <= (j - i)){
                teamCount++;
                i++;
                j-=temp;
                //cout<<"updated value of i and j->"<<i<<" "<<j<<endl;
            }
            else
            break;
            }
        }
        cout<<teamCount<<endl;
    return 0;
    }