class Solution{
  public :
    Node * search(Node *ptr, Node *x){
        if (ptr==NULL)
            return NULL;
        if (ptr->data > x->data){
            Node *left=search(ptr->left,x);
            if (left!=NULL)
                return left;
            return ptr;
        }    
        return search(ptr->right,x);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node *res=search(root,x);
        if(res!=NULL)
            return res;
        return new Node(-1);    
    }
};
