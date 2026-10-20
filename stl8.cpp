#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int n;
    cout<<"Enter the no of overs: "<<endl;
    cin>>n;

    vector<int>runs;
    for (int i = 0; i < n; i++) {
        int r;
        cout<<"Over "<<i + 1<<" runs:";
        cin>>r;
        runs.push_back(r);
    }
    int total = 0;
    for(int i = 0; i <runs.size(); i++) {
        total = total + runs[i];
    }
    sort (runs.begin(), runs.end());
    int highestRuns = runs.back();  

    cout<<"Total score: "<<total<<endl;
    cout << "Highest Runs in an Over: " << highestRuns << " Runs" << endl;
    return 0;
}