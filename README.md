<p align="center"> <h1 style="font-size: 3em; "> C - Binary Trees</h1> </p>
<br>

This is a group project by Raghad & Najwa , it's part of our studies at <td><a href="https://tuwaiq.edu.sa/holberton">Holberton School by Tuwaiq Academy</a></td>
<p align="center">
  <img src="https://img.shields.io/badge/C-language-blue?style=flat-square" />
  <img src="https://img.shields.io/badge/Binary_Tree-Project-orange?style=flat-square" />
  <img src="https://img.shields.io/badge/Holberton-School-red?style=flat-square" />
</p>

---
<p align="center">
  <a href="https://github.com/RaghadAlbeladi1">Raghad Albeladi</a> &nbsp;💡&nbsp;
  <a href="https://github.com/NajwaAljunaidel">Najwa Aljunaidel</a>
</p>

---

<h2 align="center"> Description</h2>

<table>
  <tr>
    <td style="text-align:left;">
      This project focuses on implementing and manipulating <strong>binary trees</strong> using the C programming language.<br><br>
      It is part of the low-level programming curriculum at <a href="https://www.holbertonschool.com/">Holberton School</a>.<br><br>
      In this project, we explored the creation of binary tree nodes, insertion (left/right), traversals, and property checks (like height, depth, balance, etc).<br><br>
      <strong>Skills gained:</strong> memory allocation, recursion, data structure implementation, tree traversals, and pointer management.
    </td>
    <td style="width:150px; text-align:right; vertical-align:top;">
      <img src="https://cdn-icons-png.flaticon.com/512/4228/4228616.png" width="130">
    </td>
  </tr>
</table>

---

<h2 align="center"> Project Files</h2>

<p align="center">
  <img src="https://img.shields.io/badge/binary_tree_node.c-blue?style=flat-square" />
  <img src="https://img.shields.io/badge/binary_tree_insert_left.c-green?style=flat-square" />
  <img src="https://img.shields.io/badge/binary_tree_insert_right.c-purple?style=flat-square" />
  <img src="https://img.shields.io/badge/binary_tree_delete.c-red?style=flat-square" />
  <img src="https://img.shields.io/badge/binary_tree_traversals.c-yellow?style=flat-square" />
  <img src="https://img.shields.io/badge/binary_tree_height.c-lightgrey?style=flat-square" />
  <img src="https://img.shields.io/badge/binary_tree_balance.c-pink?style=flat-square" />
  <img src="https://img.shields.io/badge/main.c-test file-blueviolet?style=flat-square" />
  <img src="https://img.shields.io/badge/README.md-complete-brightgreen?style=flat-square" />
</p>

<div align="center">

  
| File | Description |
|------|-------------|
| `binary_tree_node.c` | Creates a binary tree node with given parent and value |
| `binary_tree_insert_left.c` | Inserts a node as the left-child of another |
| `binary_tree_insert_right.c` | Inserts a node as the right-child of another |
| `binary_tree_delete.c` | Frees an entire binary tree |
| `binary_tree_is_leaf.c` | Checks if a node is a leaf (has no children) |
| `binary_tree_is_root.c` | Checks if a node is the root (has no parent) |
| `binary_tree_preorder.c` | Performs preorder traversal (Root -> Left -> Right) |
| `binary_tree_inorder.c` | Performs inorder traversal (Left -> Root -> Right) |
| `binary_tree_postorder.c` | Performs postorder traversal (Left -> Right -> Root) |
| `binary_tree_height.c` | Measures the height of a tree |
| `binary_tree_depth.c` | Measures the depth of a node |
| `binary_tree_size.c` | Measures the total size of a tree |
| `binary_tree_balance.c` | Checks the balance factor of a binary tree |
| `binary_tree_print.c` | Utility function to print a binary tree in structured format |
| `main.c` | Sample test file to check different operations |
---

<h2 align="center">🛠️ How to Compile</h2>

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_tree

