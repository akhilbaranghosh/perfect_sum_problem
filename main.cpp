#include <bits/stdc++.h>
using namespace std;
void perfect_sum_problem(vector<int> v,int start,int k,int sum,int& count){
    if(k==sum){
        count++;
        return;
    }
    for (int i = start; i < v.size(); ++i) {
        if(sum+v[i]<=k){
            perfect_sum_problem(v,i+1,k,sum+v[i],count);
        }
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int count=0;
    perfect_sum_problem(v,0,k,0,count);
    cout << count;
}