void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    // Recursively delete left and right subtrees
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    // Free the current node
    free(tree);
}

