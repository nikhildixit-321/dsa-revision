// #include<bits/stdc++.h>
// using namespace std;

// double knapshak(vector<int>&wt, vector<int>&val, int cap){

//     int n = val.size();

//     vector<pair<double, pair<int, int>>> items;

//     for(int i = 0; i < n; i++){
//         double ratio = (double)val[i] / wt[i];

//         items.push_back({ratio, {val[i], wt[i]}});
//     }

//     sort(items.begin(), items.end(), greater<>());

//     double ans = 0;

//     for(int i = 0; i < n; i++){

//         int value = items[i].second.first;
//         int weight = items[i].second.second;

//         if(weight <= cap){

//             ans += value;
//             cap -= weight;
//         }

//         else{

//             ans += cap * ((double)value / weight);
//             break;
//         }
//     }

//     return ans;
// }
// void n_meeting_room(vector<int>&start,vector<int>&end){
//     sort()
// }


// int main(){

//     // vector<int> weight = {10, 20, 30};
//     // vector<int> val = {60, 100, 120};
//     ector<int> start = {10, 20, 30};
//     vector<int> end = {60, 100, 120};

//     int cap = 50;

//     // cout << knapshak(weight, val, cap);
//     n_meeting_room(start,end)
// }


#include<bits/stdc++.h>
using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

vector<int> JobScheduling(vector<Job>& jobs) {

    int n = jobs.size();

    // Profit ke descending order mein sort
    sort(jobs.begin(), jobs.end(), [](Job a, Job b) {
        return a.profit > b.profit;
    });

    // Maximum deadline
    int maxDeadline = 0;

    for(int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, jobs[i].deadline);
    }

    // Slots
    vector<int> slot(maxDeadline + 1, -1);

    int count = 0;
    int totalProfit = 0;

    for(int i = 0; i < n; i++) {

        // Deadline se peeche check karo
        for(int j = jobs[i].deadline; j >= 1; j--) {

            if(slot[j] == -1) {

                slot[j] = jobs[i].id;

                count++;
                totalProfit += jobs[i].profit;

                break;
            }
        }
    }

    return {count, totalProfit};
}

int main() {

    vector<Job> jobs = {
        {1, 2, 100},
        {2, 1, 50},
        {3, 2, 20},
        {4, 1, 30}
    };

    vector<int> ans = JobScheduling(jobs);

    cout << "Number of Jobs: " << ans[0] << endl;
    cout << "Maximum Profit: " << ans[1] << endl;

    return 0;
}