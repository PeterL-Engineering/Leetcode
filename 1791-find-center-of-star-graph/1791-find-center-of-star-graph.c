int findCenter(int** edges, int edgesSize, int* edgesColSize) {
    
    int numVertices = edgesSize + 1; // E = V - 1

    // Each index corresponds to the number of edges for vertex n
    int * vertexEdges = calloc(numVertices, sizeof(int));

    // Parse through graph to determine number of edges per vertex
    for (int i = 0; i < edgesSize; i++) {
        // Increment at [i][n] - 1 due to shifted indices in vertexEdges
        vertexEdges[edges[i][0] - 1]++;
        vertexEdges[edges[i][1] - 1]++;
    }

    // Find vertex that has edges == edgesSize
    for (int j = 0; j < numVertices; j++) {
        if (vertexEdges[j] == edgesSize) {
            // Return j + 1 to address shifted indces in vertexEdges
            free(vertexEdges);
            return j + 1;
        }
    }

    free(vertexEdges);
    return -1;

}