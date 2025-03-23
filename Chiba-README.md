# DAA-Assignment-1
# An implementation of Arboricity algorithm 
&nbsp;&nbsp;&nbsp;&nbsp;We seek to implement the CLIQUE algorithm for Maximal Clique Enumeration Algorithm given in the paper Arboricity and Subgraph Listing by Norishige Chiba AND Takao Nishizeki.  
&nbsp;&nbsp;&nbsp;&nbsp;The algorithm CLIQUE enumerates all maximal cliques in a graph with a time complexity of O(α(G)m) per clique and O(m) space, where α(G) is the graph's arboricity (a sparsity measure which is defined as the number of edge-disjoint forests into which a graph can be decomposed) and m is the number of edges. The algorithm uses Tsukiyama et al's Maximal Independent set algorithm and the strategy of edge searching of subgraph induced by neighbours of vertex under consideration.  
&nbsp;&nbsp;&nbsp;&nbsp;In the algorithm above, "maximality test" checks whether the candidate of a new clique C’ =(C ∩ N(i))∪{i} is indeed a clique (i.e. maximal complete subgraph) of the graph Gi. The "lexico. test" checks whether C is the lexicographically largest clique of Gi-1 containing C ∩ N(i), where i is argument of CLIQUE, and Gi is subgraph induced by vertices 1 to i and C is set of vertices to be expanded to form the clique.   
&nbsp;&nbsp;&nbsp;&nbsp;By leveraging vertex ordering (sorted by degree) and efficient pruning via lexicographical checks, the algorithm bounds per-clique operations to a cost proportional to the graph's density and edge count. The proof establishes this using inductive analysis, showing that the time for each recursive step UPDATE(i, C) is dominated by neighborhood intersections and degree sums, while space remains linear due to optimized global variables and disjoint set management. This approach balances theoretical optimality for sparse graphs (α(G) ≈ O(1)) with practical scalability, though it retains exponential worst-case complexity for dense graphs. The method prioritizes low-degree vertices and early elimination of non-maximal cliques, ensuring efficient traversal of the search space.  

## Run Locally

1. Ensure that the .txt files of the datasets are in the same folder/directory as the code, and the terminal is also on the same folder/directory.
Download the dataset and place it into the project directory/folder.

2. Compile the file and run it.

For Unix/Mac:

```bash
  g++ chiba.cpp -o chiba.out
  ./chiba.out <dataset>.txt
```

For Windows:

```bash
  g++ chiba.cpp -o chiba.exe
  ./chiba.exe <dataset>.txt
```

dataset can be wiki-Vote or as-skitter or email-Enron.  
3. After the program executes properly you will get the following outputs on the terminal - 
"code execution completed!
results are available in output-chiba.txt of the same directory"  
4. Check the output-chiba.txt file to see the results of the execution.  
Note - For seeing results of next execution, please close and open the output-chiba.txt file again.  


## Results
&nbsp;&nbsp;&nbsp;&nbsp;The code was executed on a Macbook Air 1, with 8 GB RAM and the execution time may differ for different devices. We executed the C++ implementation of ELS with 3 datasets:

| Dataset        | Nodes   | Edges   |
|---------------|---------|------------|
| as-skitter    | 1,696,415 | 11,095,298 |
| Email-Enron   | 36,692  | 367,662    |
| Wiki-Vote     | 7,115   | 103,689    |


We present the number and count of Maximal Cliques, Size of maximal clique and time taken to execute for these datasets.

For as-skitter:

&nbsp;&nbsp;&nbsp;&nbsp;Since the algorithm took approximately 3.8 hours on Email-Enron and 57.35 minutes on Wiki-Vote, we estimate that it would take at least 50 hours on the as-skitter dataset, which contains 1,696,415 nodes and 11,095,298 edges. However, due to system constraints, we were unable to run the algorithm on as-skitter. Additionally, based on other algorithms, as-skitter has 37,322,355 cliques, with the largest maximal clique having a size of 67, which again shows that it would takes a lot of computational cost to give the output.  

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

Time taken: 7082330 ms (~1.9 hours)
Number of cliques: 226859
Size of the largest maximal clique: 20

![Clique Size Distribution](Email-Enron-res.png)


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

Time taken: 3441290 ms (~57.35 seconds)
Total number of cliques: 459,002
Size of the largest maximal clique size: 17

![Clique Size Distribution](Wiki-Vote-res.png)
