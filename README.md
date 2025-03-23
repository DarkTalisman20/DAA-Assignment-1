
# DAA Assignment 1   

&nbsp;&nbsp;&nbsp;&nbsp;In this project we implement three algorithms for finding all the maximal cliques in an undirected graph in C++. The algorithms are:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1. The algorithm CLIQUE from pages 220-222 from the paper titled Arboricity and Subgraph Mining; by Norishige Chiba and Takao Nishizeki. (Link: https://www.cs.cornell.edu/courses/cs6241/2019sp/readings/Chiba-1985-arboricity.pdf).  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2. The ELS Algorithm given in the paper titled Listing All Maximal Cliques in Sparse Graphs in Near-optimal Time by David Eppstein, Maarten Loffler, and Darren Strash. (Link: https://arxiv.org/abs/1006.5440).    
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3. The algorithm given in the paper titled The worst-case time complexity for generating all maximal cliques and computational experiments by Etsuji Tomita, Akira Tanakaa, Haruhisa Takahashi. (Link: https://www.sciencedirect.com/science/article/pii/S0304397506003586).  

&nbsp;&nbsp;&nbsp;&nbsp;We then executed these algorithms on three graph datasets:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1. as-Skitter (Link: https://snap.stanford.edu/data/as-Skitter.html)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2. Email-Enron (Link: https://snap.stanford.edu/data/email-Enron.html)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3. Wiki-Vote (Link: https://snap.stanford.edu/data/wiki-Vote.html)    

&nbsp;&nbsp;&nbsp;&nbsp;We treated these datasets as undirected graphs and applied these algorithms. The input is taken from a text file with some optional text, including number of vertices, followed by edges, and the rest of the lines denoting a pair of vertices with an edge between them. We store the graphs in adjacency list format. The results are shown in the algorithm-wise markdowns, and the report.
&nbsp;&nbsp;&nbsp;&nbsp; Github Repository: https://github.com/DarkTalisman20/DAA-Assignment-1
&nbsp;&nbsp;&nbsp;&nbsp; Webpage Link: https://darktalisman20.github.io/DAA-Assignment-1/
## Contributions

&nbsp;&nbsp;&nbsp;&nbsp;The various tasks and their contributions are given below:  
&nbsp;&nbsp;&nbsp;&nbsp;1. Arboricity implementation: Abdul Rahman Yakoob, Saarthek Raj, Amritansh  
&nbsp;&nbsp;&nbsp;&nbsp;2. ELS Implementation: Amritansh  
&nbsp;&nbsp;&nbsp;&nbsp;3. Tomita Implementation: Paras Puneet Singh  
&nbsp;&nbsp;&nbsp;&nbsp;4. Report: Chhavi Malhotra  

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

For Unix/Mac:

```bash
  g++ <file-name>.cpp -o <file-name>.out
  ./<file-name>.out
```

For Windows:

```bash
  g++ .cpp -o <file-name>.exe
  ./<file-name>.exe
```

For any operating system, after running the executable file, input the dataset-name.  
Example for Wiki-Vote we input:  
```bash
  Wiki-Vote.txt
```
Input the file name of the graph dataset in the terminal.

file-name can be Tomita, or ELS, or Chiba.  

&nbsp;&nbsp;&nbsp;&nbsp; Webpage Link: [https://darktalisman20.github.io/DAA-Assignment-1/](https://darktalisman20.github.io/DAA-Assignment-1/)  
&nbsp;&nbsp;&nbsp;&nbsp; Github page: [https://github.com/DarkTalisman20/DAA-Assignment-1](https://github.com/DarkTalisman20/DAA-Assignment-1)
