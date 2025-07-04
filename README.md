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
  <div>
    <p style="margin: 0;">
      <strong>What is a Binary Tree?</strong> 
   <div style="display: flex; align-items: center; gap: 20px; padding: 15px; border-radius: 12px; background-color: #f9f9f9; box-shadow: 0 4px 8px rgba(0,0,0,0.1); max-width: 750px;">
  <table style="max-width: 750px; border-collapse: collapse;">
  <tr>
    <td style="width: 130px; padding: 10px;">
      <img src="https://www.mathwarehouse.com/programming/images/binary-search-tree/binary-search-tree-sorted-array-animation.gif" 
           alt="Binary Tree Animation" 
           style="width: 120px; height: auto; border-radius: 8px;">
    </td>
    <td style="padding: 10px; vertical-align: top; font-family: Arial, sans-serif; font-size: 16px; line-height: 1.5;">
      A binary tree is a hierarchical data structure where each node has at most two children, referred to as the left and right child. It is used in various applications such as searching, sorting, and expression parsing.
    </td>
  </tr>
</table>

## Project files

### Raghad Albeladi

- Created and initialized the **project repository** with Git -> **holbertonschool-binary_trees**
- Wrote and structured the **README.md** file for the project.

| File | Description |
|-------|-------------|
| ![binary_trees.h](https://img.shields.io/badge/-binary_trees.h-blueviolet) | Header file defining the binary tree node struct, typedefs, and all function prototypes. |
| ![0-main.c](https://img.shields.io/badge/-0--main.c-blueviolet) | Main driver file for building and printing a sample binary tree. |
| ![0-binary_tree_node.c](https://img.shields.io/badge/-0--binary_tree_node.c-blue) | Implements creation of a new binary tree node. Allocates memory, initializes node's value, parent pointer, and sets left and right children to NULL. |
| ![2-binary_tree_insert_right.c](https://img.shields.io/badge/-2--binary_tree_insert_right.c-yellow) | Inserts a new node as the right child of a given parent node. Manages existing right child similarly by re-linking it to the new node. |
| ![4-binary_tree_is_leaf.c](https://img.shields.io/badge/-4--binary_tree_is_leaf.c-orange) | Checks if a given node is a leaf node (i.e., has no children). Returns 1 if leaf, else 0. |
| ![6-binary_tree_preorder.c](https://img.shields.io/badge/-6--binary_tree_preorder.c-purple) | Performs preorder traversal of the tree (node -> left -> right). |
| ![8-binary_tree_postorder.c](https://img.shields.io/badge/-8--binary_tree_postorder.c-cyan) | Performs postorder traversal (left -> right -> node). |
| ![10-binary_tree_depth.c](https://img.shields.io/badge/-10--binary_tree_depth.c-lightgreen) | Calculates the depth of a node: the number of edges from the node up to the root. |
| ![12-binary_tree_leaves.c](https://img.shields.io/badge/-12--binary_tree_leaves.c-lightcoral) | Counts how many leaf nodes (nodes without children) exist in the tree. |
| ![14-binary_tree_balance.c](https://img.shields.io/badge/-14--binary_tree_balance.c-lightgray) | Calculates the balance factor of a node: height(left subtree) - height(right subtree). |
| ![16-binary_tree_is_perfect.c](https://img.shields.io/badge/-16--binary_tree_is_perfect.c-lightseagreen) | Determines if the tree is perfect: all internal nodes have two children and all leaves are at the same depth. |
  
### Najwa Aljunaidel

| File | Description |
|-------|-------------|
| ![1-binary_tree_insert_left.c](https://img.shields.io/badge/-1--binary_tree_insert_left.c-green) | Inserts a new node as the left child of a given parent node. Handles existing left child by shifting it to be left child of the new node. |
| ![3-binary_tree_delete.c](https://img.shields.io/badge/-3--binary_tree_delete.c-red) | Recursively deletes a whole binary tree from any node. Frees all allocated memory to avoid leaks. |
| ![5-binary_tree_is_root.c](https://img.shields.io/badge/-5--binary_tree_is_root.c-lightgrey) | Determines if a node is the root by checking if its parent is NULL. |
| ![7-binary_tree_inorder.c](https://img.shields.io/badge/-7--binary_tree_inorder.c-pink) | Performs inorder traversal (left -> node -> right). |
| ![9-binary_tree_height.c](https://img.shields.io/badge/-9--binary_tree_height.c-lightblue) | Calculates the height of the tree: the longest path from the node down to a leaf. |
| ![11-binary_tree_size.c](https://img.shields.io/badge/-11--binary_tree_size.c-lightyellow) | Computes the total number of nodes in the binary tree starting from a given node recursively. |
| ![13-binary_tree_nodes.c](https://img.shields.io/badge/-13--binary_tree_nodes.c-lightpink) | Counts all nodes in the tree that have at least one child (internal nodes). |
| ![15-binary_tree_is_full.c](https://img.shields.io/badge/-15--binary_tree_is_full.c-lightsteelblue) | Checks if the binary tree is full, meaning every node has either 0 or 2 children. |
| ![17-binary_tree_sibling.c](https://img.shields.io/badge/-17--binary_tree_sibling.c-lightsalmon) | Finds the sibling of a given node, i.e., the other child of the node's parent. |



## Development & Git Flow
At the beginning of the project, we faced challenges in understanding how to collaborate effectively using Git.  
One of the main issues was the lack of experience with team-based Git workflows — especially the process of assigning reviews and waiting for Approval before merging tasks to the main branch.  
This led to confusion until we fully understood how to use branches, pull requests, and code reviews properly.  
Once we established a clear workflow, collaboration became smoother.  

We also encountered difficulties with Betty style errors. Each time a style issue appeared in a file, we created a new branch to isolate and fix it.  
Although this was time-consuming, it helped us better understand code styling and commit practices.  
Overall, the process improved our skills in Git collaboration, problem-solving, and writing clean, team-reviewed code.  

![From panic to pro](https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExOGJ2bnI4YTh5ZWsyZ2dwNGszcDRvOXdyaHRrNWU0b3F4dXZqMDRyeCZlcD12MV9naWZzX3NlYXJjaCZjdD1n/mCRJDo24UvJMA/giphy.gif)


<h2 align=>Requirements</h2>  <p><strong>OS:</strong> Ubuntu 20.04 LTS   <strong>Compiler:</strong> gcc with flags <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code> <strong>Editor:</strong> vi, vim, or emacs</p>

<p><strong>Code Style:</strong> Betty style (checked with <code>betty-style.pl</code> &amp; <code>betty-doc.pl</code>)</p>

  <strong style="display: inline-block; width: 120px;">Restrictions:</strong>
  No global variables, Max 5 functions per <code>.c</code> file, Include guard required in <code>binary_trees.h</code>
</p>


## Installation & Compilation
```bash
git clone https://github.com/RaghadAlbeladi1/holbertonschool-binary_trees.git
cd holbertonschool-binary_trees
````
Compile and test one task (example: task 0)
````
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
  binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node
````
![C5FOCL4VcAEeMqn](https://github.com/user-attachments/assets/6056e47e-24dc-46a3-a444-1d86e03b1a49)

Run
````
./0-node
````
## Examples
To use any of the implemented binary tree functions, include the header file binary_trees.h in your C code and compile it with the required .c source files.
````
#include "binary_trees.h"

int main(void) {
    /* Your code here */
    return 0;
}
````
### Testing
To use any implemented binary tree function, include the header file `binary_trees.h` and write your main program like this:

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    binary_tree_print(root);

    binary_tree_delete(root);

    return (0);
}
```
Here are some examples of what you should expect when testing different functionalities:

| Task                 | Command      | Expected Output / Behavior                |
|----------------------|--------------|------------------------------------------|
| Create a node        | `./0-node`    | Prints a binary tree with root node and children |
| Insert left child    | `./1-left`    | Left child added correctly                |
| Insert right child   | `./2-right`   | Right child added correctly               |
| Tree traversals      | `./6-pre`     | Nodes printed in preorder                  |
|                      | `./7-in`      | Nodes printed in inorder                   |
|                      | `./8-post`    | Nodes printed in postorder                 |
| Measure tree properties | `./9-height` | Prints height of the tree                 |
|                      | `./10-depth`  | Prints depth of a node                     |
|                      | `./11-size`   | Prints total number of nodes               |
| Count leaves/nodes   | `./12-leaves` | Prints number of leaf nodes                |
|                      | `./13-nodes`  | Prints number of nodes with children       |
| Check balance        | `./14-balance`| Prints balance factor                      |
| Check full/perfect   | `./15-full`   | Returns 1 if full, 0 otherwise             |
|                      | `./16-perfect`| Returns 1 if perfect, 0 otherwise          |
| Find relatives       | `./17-sibling`| Prints sibling node or NULL                |
|                      | `./18-uncle`  | Prints uncle node or NULL                   |

Make sure to verify your output matches the expected behavior for each function.









