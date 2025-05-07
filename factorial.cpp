#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    int chotoFactorial = fact(n-1);
    return chotoFactorial *n;

}
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}

