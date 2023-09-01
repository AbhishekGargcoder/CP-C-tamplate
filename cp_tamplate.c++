#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1e9 + 7
#define INF INT_MAX
#define lb lower_bound // First element NOT LESS than val (>=val)
#define ub upper_bound // First element GREATER than val(> val)
#define all(x) x.begin(), x.end()
#define revAll(x) x.rbegin(), x.rend() // reverse sort in descending order

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
// works only for vector -- most frequently used data structure
template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto e : v)
        os << e << " "; // os  = cout
    os << endl;
    return os; // to chain the operator <<
}
template <typename T> // Generic -- works for all data type
istream &operator>>(istream &is, vector<T> &v)
{ // Note : vector should be initialized to some size
    for (int i = 0; i < v.size(); i++)
        is >> v[i]; // is = cin
    return is;      // to chain the operator >>
}
template <typename T>
void print(T x)
{
    cout << x << endl;
}
void swap(ll &x, ll &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
long int gcd(long int a,long int b){    // O(log min(a,b))
    while(a){  // assume : b > a , if(a>b) => b = a,a =b
        int temp = b%a;
        b = a;
        a = temp;
    }
    return b;
}
bool isPrime(long int n){  //  O(sqrt(n)/6) 
        if(n==1) return false;
        if(n== 2 || n == 3) return true;
        if(n%2==0 || n% 3==0) return false;
        for(int i =5;i*i<=n;i+=6)    //  -> by just filters the no. of divisors
            if(n%i==0 || n %(i+2)==0) 
                return false;
        return true;
}
long double myPow(double a, int n) {        // O(log2 n)
    int m = n;
     if(n<0){
       if(n==-2147483648){ n= 2147483647;}
        else { n= -n;}}
       if(((m&1)==0)&&a<0) a= -a;
       long double res = 1;
        while(n){
           if(n&1) res = res*a;   // n % 2 == 1
           a = a*a;
           n = n>>1; // n = n/2
        }
        if(m<0) return (long double)1/res;
        return res;
    }
void toBinary(int n)
{
    vector<bool>bits;  // atmost 32 bits possible if n is int
    while(n){
        bits.push_back(n&1);
        n = n>>1; // n = n/2;
    }
    reverse(bits.begin(),bits.end());
    for(bool bit : bits)
        cout<<bit;
}
/*
    Think Greedy - (locally Optimal sol)
    Think Brute Force
    Think sol in reverse order
    Think DP [ check constraints carefully ]
    Check Base cases for DP & preove sol for Greedy
    Think Graph
    Think in Binary - set Bit, 1<<n
    Think Binary Search - Monotonic data
    if sorted - go for binary search , greedy , DP,Heaps
    contigous data - go for Heaps, sliding window , 2-pointer
*/
void solve(){
    // main logic for a problem
}
int main()
{
    int q;
    cin>>q;
    while(q--){
        solve();
    }
    return 0;
}