
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first << " " << q.second.first << " " << q.second.second;

    pair<int,int> arr[] = {{1,2},{2,3},{3,4},{4,5}};

    cout<<arr[2].first;

    return 0;
}