#include <vector>
#include <algorithm>
using namespace std;

/**
 * Class that implements the Floyd-Warshall algorithm to compute the shortest
 * distances between all pairs of vertices in a given weighted graph.
 */
class Solution {
public:
    /**
     * Function to compute all-pairs shortest paths using the Floyd-Warshall algorithm.
     * 
     * @param grid A 2D adjacency matrix representing the graph.
     *             -1 represents no direct edge between nodes.
     */
    void shortest_distance(vector<vector<int>>& grid) {
        int n = grid.size();

        // Step 1: Replace -1 with a large value to simulate "infinity"
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == -1)
                    grid[i][j] = 100000;
            }
        }

        // Step 2: Run Floyd-Warshall algorithm to update shortest paths
        for (int via = 0; via < n; via++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    // If path through 'via' is shorter, update the path
                    grid[i][j] = min(grid[i][j], grid[i][via] + grid[via][j]);
                }
            }
        }

        // Step 3: Replace 'infinity' back with -1 to indicate no path exists
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 100000)
                    grid[i][j] = -1;
            }
        }
    }
};
