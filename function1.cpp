
int max(int a, int b) { return (a>b)?a:b;}
{
if (n==0||w==00)
return 0;

if (wt[n-1]>w)
return knapsack(w, wt, val, n-1);
else
return max(val[n-1] + knapsack(w-wt[n-1], wt, val, n-1), knapsack(w, wt, val, n-a));
}
