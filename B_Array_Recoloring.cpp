#include<bits/stdc++.h>

using namespace std;

bool customSort(const pair<long long, long long> &a, const pair<long long, long long> &b)
{
    if (a.first != b.first)
        return a.first > b.first; 
    return a.second > b.second;   
}

void solve() {
    long long n, k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (k==1){
        long long option1 = a[0]+*max_element(a.begin()+1,a.end());
        long long option2 = a[n-1]+*max_element(a.begin(),a.end()-1);
        cout<<max(option1,option2)<<endl;
    }

    else{
        vector<pair<long long, long long>> values;
        for (long long i = 0; i < n; i++)
        {
            values.push_back({a[i], i});
        }

        sort(values.begin(), values.end(), customSort);

        vector<long long> selected_indices;
        long long sum_k = 0;
        for (long long i = 0; i < k; i++)
        {
            selected_indices.push_back(values[i].second);
            sum_k += values[i].first;
        }

        sort(selected_indices.begin(), selected_indices.end());
        sum_k += values[k].first;
        cout << sum_k << endl;
    }
}
int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
