#include <vector>
#include <iostream>
using namespace std;

int ticket(vector<int> &tickets,int k ){
    int ans = 0;
    for (int i=0; i<tickets.size(); ++i){
        if (i<=k){
            ans += min(tickets[i],tickets[k]);
        }else{
            ans+= min(tickets[i], tickets[k]-1);
        }

    }
    return ans;

}

int main(){

    vector<int> data={2,2,3};
    cout << ticket(data,2)<< endl;

}

