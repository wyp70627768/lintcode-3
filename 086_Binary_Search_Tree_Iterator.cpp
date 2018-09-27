/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 * Example of iterate a tree:
 * BSTIterator iterator = BSTIterator(root);
 * while (iterator.hasNext()) {
 *    TreeNode * node = iterator.next();
 *    do something for node
 */


class BSTIterator {
public:
    /*
    * @param root: The root of binary tree.
    */BSTIterator(TreeNode * root) {
        // do intialization if necessary
        push(root);
    }

    /*
     * @return: True if there has next node, or false
     */
    bool hasNext() {
        // write your code here
        return !st.empty();
    }

    /*
     * @return: return next node
     */
    TreeNode * next() {
        // write your code here
        auto y = st.top();st.pop();
        push(y->right);
        return y;
    }
    
private:
    stack<TreeNode*> st;
    void push(TreeNode * root){
        while(root){
            st.push(root);
            root = root->left;
        }
    }
};
