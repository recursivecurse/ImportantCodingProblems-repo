        #include <iostream>
	#include<vector>
        using namespace std;
        
        vector<int> vec;
        struct Node{
                
                Node* left = NULL;
                Node* right = NULL;
                int data;
            }*start = NULL;
        
        Node* newnode(int data) 
        {
                Node* temp = (Node*)malloc(sizeof(Node*));
                temp->left = NULL;
                temp->right = NULL;
                temp->data = data;
                
            return temp;
        }
        
        Node* create_tree(Node*root ,int data)
        {
                if(root==NULL)
                    {
                        return newnode(data);
                    }
                if(root->data > data)
                    {
                        root->left = create_tree(root->left,data);
                    }
                if(root->data<data)
                    {
                        root->right = create_tree(root->right,data);
                    }
                
                return root;
            
        }
        
        void inorder(Node* root)
            {
                if(root==NULL)
                    {
                        return;
                    }
                inorder(root->left);
                cout<<root->data<<" ";
		//vec.push_back(root->data);
                inorder(root->right);
        }
        
	void print(vector<int>vec)
	{
		for(int i=0;i<vec.size();i++)
			cout<<vec[i]<<" ";
	}
        Node *minvalue(Node* root)
        {
                if(root==NULL)
                {
                    return NULL;
                }
                if(root->left==NULL)
                {
                    return root;
                }
                return minvalue(root->left);
        }
        
        Node* DeleteNode(Node* root,int data)
        {
                if(root==NULL)
                {
                    return NULL;
                }
                else if(root->data>data)
                {
                    root->left = DeleteNode(root->left,data);
                }
                else if(root->data<data)
                {
                    root->right = DeleteNode(root->right,data);
                }
                else{
                    
                    if(root->left==NULL && root->right !=NULL)
                    {
                        Node * temp = root->right;
                        free(root);
                        return temp;
                    }
                    else if(root->right == NULL && root->left !=NULL)
                    {
                        Node * temp = root->left;
                        free(root);
                        return temp;
                    }
                    else if(root->left == NULL && root->right == NULL){
                        
                        free(root);
                        return NULL;
                    }
                    else{
                        
                        Node * temp = minvalue(root->right);
                        root->data = temp->data;
                        root->right = DeleteNode(root->right,temp->data);
                    }
                }
        }
        
	bool isbst(Node *root,int min,int max)
	{
		if (root == NULL) return 1;
		if (root->data >= min && root->data <= max)
		{
			return isbst(root->left,min,root->data) && isbst(root->right,root->data,max);
		}
		else return 0;
	}
	bool ISBST(Node *root)
	{
		return isbst(root,INT8_MIN,INT8_MAX);
	}		

    	int main() {
        	
        	
            	Node* root = start;
            	root = create_tree(root,50);
            	root = create_tree(root,100);
            	root = create_tree(root,20);
            	root = create_tree(root,90);
            	inorder(root);
            	root = DeleteNode(root,50);
            	cout<<endl;
            	inorder(root);
		cout<<endl;
		cout<<ISBST(root);
		//print(vec);

          	return 0;
        }
        
        
        
        
        
        
        
        
        
        
        
        
