# Floyd-Warshall_Algorithm

# 🔁 Floyd-Warshall Algorithm - All Pairs Shortest Path

This repository contains a C++ implementation of the **Floyd-Warshall Algorithm**, a classical dynamic programming algorithm used to find the **shortest paths between all pairs of vertices** in a weighted graph.

---

## 📌 Features

- Handles graphs with positive and negative weights
- Uses a high value to simulate **infinite distance**
- Detects indirect paths via intermediate nodes (`via`)
- Modifies the input matrix in-place
---
## 📥 Input Format

The graph is represented as a **2D adjacency matrix** where:
- `grid[i][j]` = weight of the edge from vertex `i` to `j`
- `-1` represents **no direct edge** between vertices

---

## 📤 Output Format

The same matrix is modified to contain the **shortest distance** between each pair of nodes.
- If no path exists between two nodes, the value will be `-1`

---

## 🧠 Algorithm Overview

The Floyd-Warshall algorithm works in **O(V³)** time and is based on dynamic programming. It progressively updates the shortest path between every pair `(i, j)` by checking if there's a shorter path through an intermediate node `via`.

---

## 🛠️ Example Usage

vector<vector<int>> grid = {
    {0, 3, -1, 5},
    {2, 0, -1, 4},
    {-1, 1, 0, -1},
    {-1, -1, 2, 0}
};
Solution sol;
sol.shortest_distance(grid);

// grid now contains the shortest distances between all pairs


📊 Time and Space Complexity
Time Complexity: O(V³)
Space Complexity: O(1) (in-place matrix update)


👤 Author
Your Name – @irythmgarg [Ridham Garg]
