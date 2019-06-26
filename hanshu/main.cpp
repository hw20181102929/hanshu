#include <iostream>
#include <algorithm>
using namespace std;

int* bubble_sort(int n)/* 对长度为n的数组执行冒泡排序 */
{
    int *p=new int[n];
    int i;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    return p;
}
int main()
{
    int n;
    cin >> n;
    int* a = bubble_sort(n);
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1)cout << " ";
    }
    cout << endl;
    return 0;
}
