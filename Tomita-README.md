# An Implementation of Tomita Algorithm
&nbsp;&nbsp;&nbsp;&nbsp;We seek to implement the maximal clique enumeration algorithm based on Tomita et al.'s approach. The implementation uses C++ to closely mimic the pseudo-code described by Tomita and collaborators, leveraging STL containers and algorithms for efficiency.  
&nbsp;&nbsp;&nbsp;&nbsp;This algorithm is a refined variant of the Bron-Kerbosch recursive method, enhanced with a pivot selection strategy. In this method, three disjoint sets of vertices are maintained:
- **P**: the set of candidate vertices for inclusion in the clique,
- **R**: the clique constructed so far, and
- **X**: the set of vertices that have already been processed (excluded from the current clique).

&nbsp;&nbsp;&nbsp;&nbsp;The recursion terminates when both **P** and **X** are empty, at which point **R** represents a maximal clique. Otherwise, the algorithm selects a pivot vertex **u** from **P ∪ X** such that **u** has the largest number of neighbors in **P**. It then iterates over each vertex **v** in **P** that is not adjacent to **u**, and recursively calls the algorithm with updated sets:
- **P** is replaced by **P ∩ neighbours(v)**,
- **R** is updated to **R ∪ {v}**, and
- **X** becomes **X ∩ neighbours(v)**.

&nbsp;&nbsp;&nbsp;&nbsp;After the recursive call returns, **v** is removed from **P** and added to **X**. An early pruning strategy is also used: if the size of **R** plus the number of vertices in **P** is less than or equal to the size of the largest clique found so far, the recursion stops early, saving computational time.

## Run Locally

 1. Ensure that the .txt files of the datasets are in the same folder/directory as the code, and the terminal is also on the same folder/directory.  
 2. Compile the file and run it.  

For Unix/Mac:

```bash
  g++ tomita.cpp -o tomita.out
  ./tomita.out <dataset>.txt
```

For Windows:

```bash
  g++ tomita.cpp -o tomita.exe
  ./tomita.exe  <dataset>.txt
```

<dataset> can be email-Enron or wiki-Vote or as-skitter.  
3. The output shows the total number of nodes, maximum clique size, number of maximal cliques, their sizes and counts, and the execution time.  

## Results

*The following results are based on executing the C++ implementation of the Tomita-based maximal clique algorithm on various datasets. The code was executed on a Macbook Air 1, with 8 GB RAM and the execution time may differ for different devices. The output includes the number of maximal cliques found, the size of the largest clique, and the execution time.*

| Dataset       | Nodes     | Edges      |
|---------------|-----------|------------|
| as-skitter    | 1,696,415 | 11,095,298 |
| Email-Enron   | 36,692    | 367,662    |
| Wiki-Vote     | 7,115     | 103,689    |

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

- **Time taken**: Approximately 8 hours
- **Total number of maximal cliques**: 37,322,355  
- **Size of the largest maximal clique**: 67

![Clique Size Distribution](as-skitter-res.png)

*Example results for Email-Enron:*  


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

- **Time taken**: 23 seconds  
- **Total number of maximal cliques**: 226,859  
- **Size of the largest maximal clique**: 20  

![Clique Size Distribution](Email-Enron-res.png)

*Example results for Wiki-Vote:*  


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

- **Time taken**: 4 seconds
- **Total number of maximal cliques**: 459,002  
- **Size of the largest maximal clique**: 17  

![Clique Size Distribution](Wiki-Vote-res.png)
```
