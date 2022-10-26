
#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)

using namespace std;


int n, m, a, b, peso;
int grafo[10000][10000];
int parent[10000];
int key[10000];
bool mstSet[10000];
int minKey()
{
	int min = INT_MAX, mn;
	for (int i = 0; i < n; i++){
        if (mstSet[i] == false && key[i]<min){
			min = key[i];
            mn = i;
        }
    }
	return mn;
}

void printMST()
{
    for (int i = 1; i < n; i++)
        cout << parent[i] << " - " << i << " --> " << grafo[i][parent[i]] << endl;
}

void primMST()
{
	for (int i = 0; i < n; i++){
		key[i] = INT_MAX, mstSet[i] = false;
    }

	key[0] = 0;
	parent[0] = -1;

	for (int i=0; i<n-1; i++) {
		
		int u = minKey();

		mstSet[u] = true;

		
		for (int v = 0; v < n; v++)

			if (grafo[u][v] && mstSet[v] == false
				&& grafo[u][v] < key[v])
				parent[v] = u, key[v] = grafo[u][v];
	}
        printMST();

}

int main()
{
	input;
    cin >> n >> m;
    memset(grafo, 0, sizeof(grafo));
    for(int i=0; i<m; i++){
        cin >> a >> b >> peso;
        grafo[a][b] = peso;
        grafo[b][a] = peso;

    }	
	primMST();
	return 0;
}
