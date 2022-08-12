
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define Endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define loop(n)          for(int i = 0; i < (n); i++)
const long long inf = (long long) 1e18;
#define fast    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int N = 2e5 + 5;
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
template<class t>
void print(t printed) { cout << printed << endl; }
void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/**************** Solution start from here *******************/
    int FindFirst(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;

        int leftIndex = -1;

        while (l <= r) {

            mid = (l + r) / 2;
            if (nums[mid] > target)
                r = mid - 1;

            else if (nums[mid] < target)
                l = mid + 1;

            else {
                leftIndex = mid;
                r = mid - 1;
            }
        }
        return leftIndex;
    }


    int FindLast(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;

        int rightIndex = -1;

        while (l <= r) {

            mid = (l + r) / 2;
            if (nums[mid] > target)
                r = mid - 1;

            else if (nums[mid] < target)
                l = mid + 1;

            else {
                rightIndex = mid;
               l = mid + 1;
            }
        }
        return rightIndex;
    }


int main() {
    file();
    fast
    int tc = 1;
    //cin >> tc;
    while (tc--) {

        int n;
        cin>>n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }

        int target;
        cin>>target;

        auto p = equal_range(all(v) , target);

        if (p.first==v.end())
            cout<<"-1 -1"<<Endl;
        else{
            // lower  bound <=
             int fristIndex = p.first -v.begin(); // lower bound
             // upper bound >
             int LastInex= p.second-v.begin() -1; //upper bound

             cout<<fristIndex<<" "<<LastInex<<endl;

        }



    }
}
 // 1 2 3 4 4 5 5 5 5 5 5 8 9 9
