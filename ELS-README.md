# An Implementation of ELS Algorithm
&nbsp;&nbsp;&nbsp;&nbsp;We seek to implement ELS algorithm given in the paper "Listing All Maximal Cliques in Sparse Graphs in Near-optimal Time" by David Eppstein, Maarten Loffler, and Darren Stras from the Department of Computer Science, University of California, Irvine, USA. The language used in this implementation is C++, since we needed many STL containers and algorithms to implement the algorithm close to pseudo-code.  
&nbsp;&nbsp;&nbsp;&nbsp;The ELS is a variation of Bron-Kerbosch Algorithm. The ELS paper described time complexity in terms of degeneracy (d, which is the smallest number such that every sub-graph contains a node of degree atmost d), the complexity being O(dn(3^(d/3))). Bron-Kerbosch algorithm is a recursive algorithm which, as arguments take three disjoint sets of vertices, P (the set of vertices which will be considered for inclusion in the clique), R (the clique found so far), and X (the set of vertices which are excluded in maximal clique).   
&nbsp;&nbsp;&nbsp;&nbsp;The Bron-Kerbosch Algorithm recursion terminates when both P and X are empty, printing the maximal clique R. Else, the algorithm iterates over all the vertices v in P, recursively calling Bron-Kerbosch on arguments: P as P ∩ neighbours(v), R as R ∪{v} and X as X ∩ neighbours(v). When the recursive call returns, we mpve v from P to X.  
&nbsp;&nbsp;&nbsp;&nbsp;The ELS modifies the Bron-Kerbosch Algorithm, in two basic ways.  
&nbsp;&nbsp;&nbsp;&nbsp;The first modification is to begin with a degeneracy ordering of vertices, which can be obtained by a greedy algorithm of selecting and then removing vertex with minimum degree till the graph is empty. Then, we iterate over all the vertices in the degeneracy ordering.  
&nbsp;&nbsp;&nbsp;&nbsp;The second modification is that for each vertex vi, we take the set P as all the neighbours of vi, which are after vi in degeneracy ordering, and X as all the neighbours of vi, which are before vi in degeneracy ordering, and R as {vi}. Here, instead of calling Bron-Kerbosch basic algorithm, we call a variation called Bron-Kerbosch Pivot, which has same arguments as Bron-Kerbosch, but when P ∪ X is not empty, we choose a pivot in the same way as Tomita chose, that is the one with largest value of |P ∩ neighbours (u)|. After this, for each vertex v in  P\neighbours(u), we recursively call the Bron-Kerbosch Pivot with the arguments: P as P ∩ neighbours(v), R as R ∪{v} and X as X ∩ neighbours(v). When the recursive call returns, we move v from P to X.
## Run Locally

Download the project with the code file

```bash
  git clone https://github.com/DarkTalisman20/DAA-Assignment-1.git
```

Go to the project directory

```bash
  cd DAA-Assignment-1
```

Download the dataset and place it into the project directory/folder.

Compile the file and run it.

```bash
  g++ ELS.cpp -o ELS.out
  ./ELS.out
```

Input the file name of the graph dataset in the terminal.



## Results
    We executed the C++ implementation of ELS with 3 datasets:

| Dataset        | Nodes   | Edges   |
|---------------|---------|------------|
| as-skitter    | 1,696,415 | 11,095,298 |
| Email-Enron   | 36,692  | 367,662    |
| Wiki-Vote     | 7,115   | 103,689    |


We present the number and count of Maximal Cliques, Size of maximal clique and time taken to execute for these datasets.

For as-skitter:

| Clique Size | Count      |
|------------|-----------|
| 2          | 2,319,807 |
| 3          | 3,171,609 |
| 4          | 1,823,321 |
| 5          | 939,336   |
| 6          | 684,873   |
| 7          | 598,284   |
| 8          | 588,889   |
| 9          | 608,937   |
| 10         | 665,661   |
| 11         | 728,098   |
| 12         | 798,073   |
| 13         | 877,282   |
| 14         | 945,194   |
| 15         | 980,831   |
| 16         | 939,987   |
| 17         | 839,330   |
| 18         | 729,601   |
| 19         | 639,413   |
| 20         | 600,192   |
| 21         | 611,976   |
| 22         | 640,890   |
| 23         | 673,924   |
| 24         | 706,753   |
| 25         | 753,633   |
| 26         | 818,353   |
| 27         | 892,719   |
| 28         | 955,212   |
| 29         | 999,860   |
| 30         | 1,034,106 |
| 31         | 1,055,653 |
| 32         | 1,017,560 |
| 33         | 946,717   |
| 34         | 878,552   |
| 35         | 809,485   |
| 36         | 744,634   |
| 37         | 663,650   |
| 38         | 583,922   |
| 39         | 520,239   |
| 40         | 474,301   |
| 41         | 420,796   |
| 42         | 367,879   |
| 43         | 321,829   |
| 44         | 275,995   |
| 45         | 222,461   |
| 46         | 158,352   |
| 47         | 99,522    |
| 48         | 62,437    |
| 49         | 39,822    |
| 50         | 30,011    |
| 51         | 25,637    |
| 52         | 17,707    |
| 53         | 9,514     |
| 54         | 3,737     |
| 55         | 2,042     |
| 56         | 1,080     |
| 57         | 546       |
| 58         | 449       |
| 59         | 447       |
| 60         | 405       |
| 61         | 283       |
| 62         | 242       |
| 63         | 146       |
| 64         | 84        |
| 65         | 49        |
| 66         | 22        |
| 67         | 4         |


Time taken: 3,410,914 ms (~56.85 minutes)
Total number of cliques: 37,322,355
The size of the largest maximal clique: 67

![Clique Size Distribution](ELS-as-skitter-res.png)

For Email-Enron:

| Clique Size | Count  |
|------------|--------|
| 2          | 14,070 |
| 3          | 7,077  |
| 4          | 13,319 |
| 5          | 18,143 |
| 6          | 22,715 |
| 7          | 25,896 |
| 8          | 24,766 |
| 9          | 22,884 |
| 10         | 21,393 |
| 11         | 17,833 |
| 12         | 15,181 |
| 13         | 11,487 |
| 14         | 7,417  |
| 15         | 3,157  |
| 16         | 1,178  |
| 17         | 286    |
| 18         | 41     |
| 19         | 10     |
| 20         | 6      |

Time taken: 5991 milliseconds
Number of cliques: 226859
Size of the largest maximal clique: 20

![Clique Size Distribution](ELS-Email-Enron-res.png)


For Wiki-Vote:

| Clique Size | Count   |
|------------|--------|
| 2          | 8,655  |
| 3          | 13,718 |
| 4          | 27,292 |
| 5          | 48,416 |
| 6          | 68,872 |
| 7          | 83,266 |
| 8          | 76,732 |
| 9          | 54,456 |
| 10         | 35,470 |
| 11         | 21,736 |
| 12         | 11,640 |
| 13         | 5,449  |
| 14         | 2,329  |
| 15         | 740    |
| 16         | 208    |
| 17         | 23     |

Time taken: 6,133 ms (~6.13 seconds)
Total number of cliques: 459,002
Size of the largest maximal clique size: 17

![Clique Size Distribution](ELS-Wiki-Vote-res.png)
