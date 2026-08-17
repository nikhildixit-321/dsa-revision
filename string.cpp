#include<bits/stdc++.h>
using namespace std;

int atmost(string &s, int k) {

    unordered_map<char, int> mpp;

    int left = 0;
    int ans = 0;

    for(int right = 0; right < s.size(); right++) {

        mpp[s[right]]++;

        while(mpp.size() > k) {

            mpp[s[left]]--;

            if(mpp[s[left]] == 0) {
                mpp.erase(s[left]);
            }

            left++;
        }

        ans += right - left + 1;
    }

    return ans;
}

int main() {

    string s;
    int k;

    cin >> s >> k;

    cout << atmost(s, k) - atmost(s, k - 1);

    return 0;
}