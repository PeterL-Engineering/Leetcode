class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int edgesSize = edges.size();
        int numVertices = edgesSize + 1; // E = V - 1

        // Each index corresponds to the number of edges for vertex n
        vector<int> vertexEdges(numVertices);

        // Parse through graph to determine number of edges per vertex
        for (int i = 0; i < edgesSize; i++) {
            // Increment at [i][n] - 1 due to shifted indices in vertexEdges
            vertexEdges[edges[i][0] - 1]++;
            vertexEdges[edges[i][1] - 1]++;
        }

        // Find vertex that has edges == edgesSize
        for (int j = 0; j < numVertices; j++) {
            if (vertexEdges[j] == edgesSize) {
                // Return j + 1 to address shifted indices in vertexEdges
                return j + 1;
            }
        }

        return -1;

    }
};