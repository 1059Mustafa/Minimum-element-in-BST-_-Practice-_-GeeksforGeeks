int minValue(Node* root)
{
    // base case
    if(root==NULL)
    return -1;
    
    struct Node* current = root;
    
    // go left till node is not equal to NULL
    while (current->left != NULL) {
        current = current->left;
    }
    
    return(current->data);
    
}
