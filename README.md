<p align="center">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" alt="C logo" width="60" height="60"/>
  &nbsp;&nbsp;
  <img src="https://github.com/user-attachments/assets/5f8d33ce-fed8-438a-935c-a9916afef26e" alt="Holberton logo" width="110" height="55"/>
  &nbsp;&nbsp;
  <a href="https://git.io/typing-svg">
    <img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=900&duration=4998&pause=987&color=2BF74E&background=197A2300&width=300&height=50&lines=Binary+Trees+project+" alt="Typing SVG" />
  </a>
</p>
<p align="center">
  <a href="https://github.com/RaghadAlbeladi1">
    <img src="https://img.shields.io/badge/GitHub-Raghad_Albeladi-181717?style=flat-square&logo=github&logoColor=white" alt="Raghad's GitHub">
  </a>
  &nbsp;
  <a href="https://github.com/NajwaAljunaidel">
    <img src="https://img.shields.io/badge/GitHub-Najwa_Aljunaidel-181717?style=flat-square&logo=github&logoColor=white" alt="Najwa's GitHub">
  </a>
</p>
<div style="display: flex; align-items: flex-start; justify-content: space-between; max-width: 900px; margin: 0 auto;">
  <div style="flex: 1; padding-right: 20px;">
    <p>
      This is a group project by <strong>Raghad</strong> & <strong>Najwa</strong>, as part of our studies at 
      <a href="https://tuwaiq.edu.sa/holberton">Holberton School by Tuwaiq Academy</a>. It focuses on implementing and manipulating <strong>binary trees</strong> using the C programming language.
      We explored the creation of binary tree nodes, insertion (left/right), traversals, and property checks
      such as height, depth, and balance.
    </p>
    <p>
      <strong>Skills gained:</strong> memory allocation, recursion, data structure implementation,
      tree traversals, and pointer management.
    </p>
  </div>
  
---
| **File**                          | **Description**                                               |
|----------------------------------|---------------------------------------------------------------|
| ![binary_trees.h](https://img.shields.io/badge/-binary_trees.h-blueviolet) | Header file defining the binary tree node struct, typedefs, and all function prototypes for tree operations like creation, insertion, traversal, deletion, and property checks. |
| ![0-binary_tree_node.c](https://img.shields.io/badge/-0--binary_tree_node.c-blue)          | Implements creation of a new binary tree node. Allocates memory, initializes node's value, parent pointer, and sets left and right children to NULL. |
| ![1-binary_tree_insert_left.c](https://img.shields.io/badge/-1--binary_tree_insert_left.c-green) | Inserts a new node as the left child of a given parent node. Handles existing left child by shifting it to be left child of the new node. |
| ![2-binary_tree_insert_right.c](https://img.shields.io/badge/-2--binary_tree_insert_right.c-yellow) | Inserts a new node as the right child of a given parent node. Manages existing right child similarly by re-linking it to the new node. |
| ![3-binary_tree_delete.c](https://img.shields.io/badge/-3--binary_tree_delete.c-red)       | Recursively deletes a whole binary tree from any node. Frees all allocated memory to avoid leaks. |
| ![4-binary_tree_is_leaf.c](https://img.shields.io/badge/-4--binary_tree_is_leaf.c-orange)  | Checks if a given node is a leaf node (i.e., has no children). Returns 1 if leaf, else 0. |
| ![5-binary_tree_is_root.c](https://img.shields.io/badge/-5--binary_tree_is_root.c-lightgrey) | Determines if a node is the root by checking if its parent is NULL. |
| ![6-binary_tree_preorder.c](https://img.shields.io/badge/-6--binary_tree_preorder.c-purple) | Performs preorder traversal of the tree (node -> left -> right) and applies a user-provided function to each node's value. |
| ![7-binary_tree_inorder.c](https://img.shields.io/badge/-7--binary_tree_inorder.c-pink)     | Performs inorder traversal (left -> node -> right) on the binary tree, calling a function on each node's value. |
| ![8-binary_tree_postorder.c](https://img.shields.io/badge/-8--binary_tree_postorder.c-cyan) | Performs postorder traversal (left -> right -> node), invoking a function on each node's value. |
| ![9-binary_tree_height.c](https://img.shields.io/badge/-9--binary_tree_height.c-lightblue)   | Calculates the height of the tree: the longest path from the node down to a leaf (number of edges). |
| ![10-binary_tree_depth.c](https://img.shields.io/badge/-10--binary_tree_depth.c-lightgreen)  | Calculates the depth of a node: the number of edges from the node up to the root. |
| ![11-binary_tree_size.c](https://img.shields.io/badge/-11--binary_tree_size.c-lightyellow)  | Computes the total number of nodes in the binary tree starting from a given node recursively. |
| ![12-binary_tree_leaves.c](https://img.shields.io/badge/-12--binary_tree_leaves.c-lightcoral) | Counts how many leaf nodes (nodes without children) exist in the tree. |
| ![13-binary_tree_nodes.c](https://img.shields.io/badge/-13--binary_tree_nodes.c-lightpink)  | Counts all nodes in the tree that have at least one child (internal nodes). |
| ![14-binary_tree_balance.c](https://img.shields.io/badge/-14--binary_tree_balance.c-lightgray) | Calculates the balance factor of a node, defined as height(left subtree) - height(right subtree). Useful for balanced tree checks. |
| ![15-binary_tree_is_full.c](https://img.shields.io/badge/-15--binary_tree_is_full.c-lightsteelblue) | Checks if the binary tree is full, meaning every node has either 0 or 2 children. Returns 1 if full, else 0. |
| ![16-binary_tree_is_perfect.c](https://img.shields.io/badge/-16--binary_tree_is_perfect.c-lightseagreen) | Determines if the tree is perfect: all internal nodes have two children and all leaves are at the same depth. |
| ![17-binary_tree_sibling.c](https://img.shields.io/badge/-17--binary_tree_sibling.c-lightsalmon) | Finds the sibling of a given node, i.e., the other child of the node's parent. Returns NULL if none. |
| ![18-binary_tree_uncle.c](https://img.shields.io/badge/-18--binary_tree_uncle.c-lightgoldenrodyellow) | Finds the uncle of a node, defined as the sibling of the node’s parent. |
| ![0-main.c](https://img.shields.io/badge/-0--main.c-lightcyan)                               | Main driver file that builds a sample binary tree using the above functions and prints it. Serves as test and demonstration code. |

---
<h2 align=>Requirements</h2>  <p><strong>OS:</strong> Ubuntu 20.04 LTS   <strong>Compiler:</strong> gcc with flags <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code> <strong>Editor:</strong> vi, vim, or emacs</p>

<p><strong>Code Style:</strong> Betty style (checked with <code>betty-style.pl</code> &amp; <code>betty-doc.pl</code>)</p>

<p><strong>Restrictions:</strong></p> <li>No global variables</li> <li>Max 5 functions per <code>.c</code> file</li> <li>Include guard required in <code>binary_trees.h</code></li>
</ul>






