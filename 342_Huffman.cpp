#include <bits/stdc++.h>
using namespace std;
class MinHeapNode
{
public:
    char data;
    unsigned freq;
    MinHeapNode *left, *right;
    MinHeapNode(char data, unsigned freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
class compare{
    public:
    bool operator()(MinHeapNode* l ,MinHeapNode* r)
    {
        return(l->freq > r->freq);
    }
};
void printt(MinHeapNode* root,string str)
{
    if(!root)
    {
        return;
    }
    if(root->data != '$')
    {
        cout<<root->data<<" -> "<<str<<endl;
    }
    printt(root->left,str+"0");
    printt(root->right,str+"1");
}
void huffman(char arr[],int freq[],int n)
{
    MinHeapNode* left,*right,*top;
    priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare> p;
    for(int i=0;i<n;i++)
    {
        p.push(new MinHeapNode(arr[i],freq[i]));
    }
    while(p.size()!=1)
    {
        left=p.top();
        p.pop();
        right=p.top();
        p.pop();
        top=new MinHeapNode('$',left->freq+right->freq);
        top->left=left;
        top->right=right;
        p.push(top);
    }
    printt(p.top(),"");
}
int main()
{
     char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
 
    int size = sizeof(arr) / sizeof(arr[0]);
 
    huffman(arr, freq, size);
 
    return 0;
}