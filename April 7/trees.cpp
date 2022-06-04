#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

        // node constructor
        node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* build_Tree()
{
    int data;
    cin>>data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        node* root = new node(data);
        root -> left = build_Tree();    // left sub tree
        root -> right = build_Tree();   // right sub tree
        return root;
    }
}

void preorder(node *root)   // root lst rst
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    cout<<root->data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(node *root)   // lst root rst
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    inorder(root -> left);
    cout<<root->data<<" ";
    inorder(root -> right);
}

void postorder(node *root)   // lst rst root
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    postorder(root -> left);
    postorder(root -> right);
    cout<<root->data<<" ";
}

int count_node(node* root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    
    // recursive case
    return count_node(root -> left) + count_node(root -> right) + 1;
}

int height(node* root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    
    // recursive case
    int lh = height(root -> left);
    int rh = height(root -> right);
    return max(lh, rh) + 1;
}

int sum_of_nodes(node* root)
{
    // base case 
    if (root == NULL)
    {
        return 0;
    }

    // recursive case
    return sum_of_nodes(root -> left) + sum_of_nodes(root -> right) + root -> data;
}

void mirror(node* root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

int diameter(node* root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    
    // if diameter is passing through left subtree
    int opt1 = diameter(root -> left);

    // if diameter is passing through right subtree
    int opt2 = diameter(root -> right);

    // if diameter is passing through root node 
    int opt3 = height(root -> left) + height(root -> right);

    return max(opt1, max(opt2, opt3));
}

class Pair1
{
    public:
        int dia;
        int height;
};

Pair1 fast_diameter(node* root)
{
    Pair1 p;

    // base case
    if (root == NULL)
    {
        p.height = 0;
        p.dia = 0;
        return p;
    }
            
    // recursive case
    Pair1 left = fast_diameter(root -> left);    // left (ls) --> (height,diameter)
    Pair1 right = fast_diameter(root -> right);    // right (rs) --> (height,diameter)
    p.height = max(left.height, right.height) + 1;
    int opt1 = left.height + right.height;
    int opt2 = left.dia;
    int opt3 = right.dia;
    p.dia = max(opt1, max(opt2, opt3));
    return p;
}

void print_level(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* x = q.front();
        q.pop();
        if (x == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<x -> data<<" ";
            if (x -> left)  // or x -> left != NULL
            {
                q.push(x -> left);
            }
            if (x -> right)
            {
                q.push(x -> right);
            }
        }
    }
}

node* build_tree_levelwise()
{
    node* root = NULL;
    int data;
    cout<<"Enter the data of root : ";
    cin>>data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* x = q.front();
        q.pop();
        cout<<"Enter the data of children of "<<x -> data<<" : ";
        int left_child, right_child;
        cin>>left_child>>right_child;
        if (left_child != -1)
        {
            x -> left = new node(left_child);
            q.push(x -> left);
        }
        if (right_child != -1)
        {
            x -> right = new node(right_child);
            q.push(x -> right);
        }
    }
    return root;
}

int pre[] = {8,3,1,6,4,7,16,14,13};
int in[] = {1,3,4,6,7,8,16,13,14};
int i = 0;

node* createTree(int s, int e)
{
    // base case
    if (s>e)
    {
        return NULL;
    }
    
    // recursive case
    int d = pre[i++];
    // or int d = pre[i]; i++;
    node* root = new node(d);
    int k = -1;
    for (int j = s; j <= e; j++)
    {
        if (in[j] == d)
        {
            k = j;
            break;
        }
    }
    root -> left = createTree(s, k-1);
    root -> right = createTree(k+1, e);
    return root;
}

node* insert_in_bst(node* root, int data)
{
    // base case
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    
    // recursive case
    if (data <= root -> data)
    {
        root -> left = insert_in_bst(root -> left, data);
    }
    else
    {
        root -> right = insert_in_bst(root -> right, data);
    }
    return root;
}

node* build_bst()
{
    node* root = NULL;
    int data;
    cin>>data;
    while (data != -1)
    {
        root = insert_in_bst(root, data);
        cin>>data;
    }
    return root;
}

bool search_in_bst(node* root, int key)
{
    // base case
    if (root == NULL)
    {
        return false;
    }
    
    // recursive case
    if (key == root -> data)
    {
        return true;
    }
    else if (key < root -> data)
    {
        return search_in_bst(root -> left, key);
    }
    else
    {
        return search_in_bst(root -> right, key);
    }
}

void print_range(node* root, int k1, int k2)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    // recursive case
    print_range(root -> left, k1, k2);
    if (root -> data >= k1 && root -> data <= k2)
    {
        cout<<root -> data<<" ";
    }
    print_range(root -> right, k1, k2);
}

bool is_BST(node* root, int min = INT_MIN, int max = INT_MAX)
{
    // base case
    if (root == NULL)
    {
        return true;
    }
    
    // recursive case
    if ((root->data >= min && root->data<= max) && is_BST(root->left, min, root->data) && is_BST(root->right, root->data, max))
    {
        return true;
    }
    return false;
}

class Pair2
{
    public:
        int height;
        bool balanced;

        // constructor
        Pair2()
        {
            height = 0;
            balanced = true;
        }
};

Pair2 is_balanced(node* root)
{
    Pair2 p;
    // base case
    if (root == NULL)
    {
        return p;
    }
    
    // recursive case
    Pair2 left = is_balanced(root -> left);
    Pair2 right = is_balanced(root -> right);
    p.height = max(left.height, right.height) + 1;
    if (left.balanced && right.balanced && abs(left.height - right.height)<=1)
    {
        p.balanced = true;
    }
    else
    {
        p.balanced = false;
    }
    return p;
}

int main()
{
    // node* root = build_Tree();

    // cout<<endl<<"Preorder :-"<<endl;
    // preorder(root);
    // cout<<endl;

    // cout<<endl<<"Inorder :-"<<endl;
    // inorder(root);
    // cout<<endl;

    // cout<<endl<<"Postorder :-"<<endl;
    // postorder(root);
    // cout<<endl;

    // cout<<endl<<"The total nodes are "<<count_node(root)<<endl;
    // cout<<endl<<"The height of tree is "<<height(root)<<endl;
    // cout<<endl<<"The sum of nodes of tree is "<<sum_of_nodes(root)<<endl;
    // cout<<endl<<"The diameter of tree is "<<diameter(root)<<endl;
    
    // Pair1 x = fast_diameter(root);
    // cout<<endl<<"The diameter of tree is "<<x.dia<<endl;
    // cout<<endl<<"The height of tree is "<<x.height<<endl;

    // cout<<endl;
    // print_level(root);

    // mirror(root);
    // cout<<endl<<endl<<"For mirror tree "<<endl;
    // cout<<endl<<"Preorder :-"<<endl;
    // preorder(root);
    // cout<<endl;

    // cout<<endl<<"Inorder :-"<<endl;
    // inorder(root);
    // cout<<endl;

    // cout<<endl<<"Postorder :-"<<endl;
    // postorder(root);
    // cout<<endl;

    // cout<<endl<<"Level wise tree "<<endl;
    // node* root1 = build_tree_levelwise();
    // cout<<endl;
    // print_level(root1);

    // int n = sizeof(in)/sizeof(int);
    // node* root2 = createTree(0, n-1);
    // cout<<endl<<"Preorder :-"<<endl;
    // preorder(root2);
    // cout<<endl;

    // cout<<endl<<"Inorder :-"<<endl;
    // inorder(root2);
    // cout<<endl;

    // cout<<endl<<"Postorder :-"<<endl;
    // postorder(root2);
    // cout<<endl;

    // cout<<endl<<"Level wise tree "<<endl;
    // print_level(root2);

    node* root3 = build_bst();
    cout<<endl<<"Preorder :-"<<endl;
    preorder(root3);
    cout<<endl;

    cout<<endl<<"Inorder :-"<<endl;
    inorder(root3);
    cout<<endl;

    cout<<endl<<"Postorder :-"<<endl;
    postorder(root3);
    cout<<endl;

    cout<<endl<<"Level wise tree "<<endl;
    print_level(root3);

    cout<<endl;
    int key;
    cin>>key;
    if (search_in_bst(root3, key))
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is not present"<<endl;
    }

    cout<<endl;
    print_range(root3, 3, 13);
    cout<<endl;

    if (is_BST(root3))
    {
        cout<<endl<<"Yes, it is a BST"<<endl;
    }
    else
    {
        cout<<endl<<"No, it is is not a BST"<<endl;
    }

    Pair2 z = is_balanced(root3); 
    if (z.balanced)
    {
        cout<<endl<<"Yes, it is balanced with height "<<z.height<<endl;
    }
    else
    {
        cout<<endl<<"No, it is is not balanced"<<endl;
    }
    return 0;
}

// Tree        8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 16 -1 14 13 -1 -1 -1
// Preorder    8 3 1 6 4 7 16 14 13 
// Inorder     1 3 4 6 7 8 16 13 14 
// Postorder   1 4 7 6 3 13 14 16 8
// BST         8 3 6 9 16 13 17 16 -1
// Output of inorder of BST will be always sorted