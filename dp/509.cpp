class Solution {
public:
    int fib(int n) {
        int help[100] = {0};
        return save(help, n);
    }

    int save(int help[], int n)
    {
        if (n == 0 || n == 1) return n;
        if(help[n] != 0) return help[n];
        help[n] = save(help, n-1) + save(help, n-2);
        return help[n];
    }
};
