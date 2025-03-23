#include <bits/stdc++.h>

using namespace std;

typedef struct ll_node{
    int val;
    struct ll_node* next;
}ll_node;

ll_node* insert_at_start(ll_node* head, int value){
    ll_node* node = (ll_node*)malloc(sizeof(ll_node));
    node->val = value;
    node->next = head;
    head = node;
    return head;
} 

ll_node* delete_from_start(ll_node* head){
    ll_node* node = head;
    head = head->next;
    free(node);
    return head;
}

void delete_vertex(vector<vector<int>> adjlist, vector<int> sorted_ver, int val){
    int sz = adjlist[val].size();
    for(int i = 0; i < sz; i++){
        int adjvert = adjlist[val][i];
        auto it = adjlist[adjvert].begin();
        while(*it!=val){
            it++;
        }
        adjlist[adjvert].erase(it);
    }
    adjlist[val].clear();
    sorted_ver.erase(find(sorted_ver.begin(), sorted_ver.end(), val));
}

int main(){
    int n;
    cin >> n;  //number of vertices
    int m;
    cin >> m;   //number of edges
    vector<vector<int>> adjlist(n, vector<int>(0));
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adjlist[x-1].push_back(y-1);
        adjlist[y-1].push_back(x-1);
    }
    cout << "Adjacency list:\n";
    for(int i = 0; i < n; i++){
        cout << i << '\n';
        int l = adjlist[i].size();
        for(int j = 0; j < l; j++){
            cout << "->" << adjlist[i][j];
        }
        cout << "\n";
    }
    //sort the vertices;
    vector<ll_node*> bucket(n, NULL);
    for(int i = 0; i < n; i++){
        int sz = adjlist[i].size();
        bucket[sz] = insert_at_start(bucket[sz], i);
    }
    vector<int> sorted_vert(0);
    for(int i = n-1; i>=0; i--){
        //every bucket in bucket sort
        while(bucket[i]!=NULL){
            sorted_vert.push_back(bucket[i]->val);
            bucket[i] = delete_from_start(bucket[i]);
        }
    }
    cout << "Sorted Vertices\n";
    for(int i = 0; i < n; i++){
        cout << sorted_vert[i] << ' ';
    }
    cout << '\n';
    cout << "Triangles are:\n";
    for(int i = 0; i < n; i++){
        int vi = sorted_vert[i];
        vector<bool> marked(n, false);
        int adjs = adjlist[vi].size();
        for(int j = 0; j < adjs; j++){
            marked[adjlist[vi][j]] = true;
        }
        for(int j = 0; j < n; j++){
            int u = adjlist[vi][j];
            if(marked[u]){
                int adjj = adjlist[j].size();
                for(int k = 0; k < adjj; k++){
                    int w = adjlist[u][k];
                    if(w!=vi && marked[w]){
                        cout << vi+1 << " " << u+1 << " " << w+1 << '\n';
                    }
                }
            }
            marked[u] = false;
        }
        delete_vertex(adjlist, sorted_vert, vi);
    }
}