#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> heap;
    int n, m, k,val,op;
    cin >> n >> m >> k;
    for (int i = 0;i < n;i++)
    {
        cin >> val;
        //if (heap.size()<k)
        //{
        //    heap.push(val);
        //}
        //else
        //{
        //    heap.pop();
        //    heap.push(val);
        //}
        heap.push(val);
        if (heap.size() > k) { heap.pop(); }
    }
    while (m--)
    {
        cin >> op;
        if (op == 1) { cin >> val;heap.push(val);if (heap.size() > k) heap.pop(); }
        else if (op == 2) { if (heap.size() == k) cout << heap.top();else return -1; }
    }
    return 0;
}