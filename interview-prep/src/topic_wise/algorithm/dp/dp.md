### 0 - 1 Knapsack
    - wt : weight array
    - v  : value array
    - W  : Knapsack weight limit
    - n  : # of elements in array

                          { 0,  
    zokps(wt, v, w, n) =  { zokps(wt, v, w, n - 1)
                          { max(                              
                          {       v[n-1] + zokps(wt, v, w - wt[n-1], n)
                          {                zokps(wt, v, w, n - 1      )
                          {     )

### Longest Common Subsequence

### Subset Sum

### Coin Change
    - two sets
      - do not include Sm
      - include atleast one coin Sm
```
    // m -> # of elements in array S
    // n -> net to get changed coins in value of n
    // S - contains different number of coins with values
    
                        {  1 while n == 0 // empty set to get changed value 0
    count(S[], m, n) =  {  0 while n < 0 // no solution exist with negative value
                        {  0 while m < 0 && n >= 1 // no coins but need to get changed value
                        {  count(S[], m - 1, n) + count(S[], m , n - S[m-1]) //second count method determines that we took one m'th element from S and we're ready to take more

```

### Edit distance
    find minimum number of edit required to change 's1' to 's2'

    // s1 - > first string
    // s2 - > second string
    // m - > initial length of s1
    // n -> initial length of s2

                          { 0  while m == 0 && n == 0
    ed(s1, s2, m, n) =    { n  while m = 0
                          { m  while n = 0
                          {   editDistance(s1, s2, m - 1, n - 1)   while s1[m-1] == s2[n-1]
                          { 
                              min ( ed(s1, s2, m, n- 1),  // insert into s1
                                    ed(s1, s2, m - 1, n), // delete from s1
                                    ed(s1, s2, m - 1, n - 1) // replace any chr of s1 with s2's
                              )


### LIS
    => Let L[k] be the LIS of array, a[1...k], for 1 <=k <= n
    => 2 steps to find dp solution
        => find induction hypothesis
            => let's think that, for a given subarray, a[1...m],  we know all the LIS for a certain length array, a[1...k] for 1 <= k <= m and they are, L[1], L[2] ... L[k]
            => let's append one item to the previous subarray, then the item will be a[m+1], so we know all the L[k], 1 <=k <= m, and need to find longest among them such as
            a[k] < a[m+1] as need increasing subsequence, if no such exist then LIS[m+1] = 1 else if meet the condition then LIS[m+1] = max(L[k]) + 1, 1 <= k <= m

        => find base cases
            => LIS[1] = 1 // for one element only one item possible(a[1] = 2, but we're here to find the LIS length not the elements)
    
    1 <= k <= m


### Shortest Path Grid
  => find the shortest path between the top left corner of the grid to the bottom right corner
  1. Induct hypothesis
    0| 2|
    _|__|_
    1| x|_
    _|__|
    _|  |
    
    arr[u][v] = 0
    arr[u][v+1] = 2
    arr[u+1][v] = 1
    
    we need to find 
        arr[u+1][v+1] ?
        and it should be, arr[u+1][v+1] = Math.min(arr[u][v+1], arr[u+1][v]) + val[u+1][v+1]
         
  2. base cases
    for first row     arr[0][i] = arr[0][i-1] +  grid[0][i] i >= 2
    for first column, arr[i][0] = arr[i-1][0] +  grid[i][0] i >= 2
    
