class Solution {
public:
    int fib(int n) {
        int *table = new int[n+1]();
        return cal(table, n);
    }
    int cal(int arr[], int n)
    {
        if(n==0 | n==1) return n;
        if(arr[n] != 0) return arr[n];
        arr[n] = cal(arr, n-1) + cal(arr, n-2);
        return arr[n];
    }
};
