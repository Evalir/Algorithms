

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
class Solution {
public:
    vector<bool> vis;
    vector<int> dis;
    int tdis = -1;

    void dfs(TreeNode* u, int dist, TreeNode* target) {
        vis[u->val] = true;
        dis[u->val] = dist;

        if (u->val == target->val)
            tdis = dist;
        if (!vis[u->left->val])
            dfs(u->left, dist+1,target);

        if (!vis[u->right->val])
            dfs(u->right, dist+1,target);

    }
    vector<int> ans;
    void dfsMark(TreeNode* u, int dist, TreeNode* target, int K) {
        vis[u->val] = true;
        dis[u->val] = dist;

        if (abs(dis[u->val] - dist) == K)
            ans.push_back(u->val);

        if (!vis[u->left->val])
            dfsMark(u->left, dist+1,target,K);

        if (!vis[u->right->val])
            dfsMark(u->right, dist+1,target,K);

    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        vis.resize(500);
        vis.resize(500);
        dfs(root, 0, target);
        for(int i = 0; i < 400; i++)
            vis[i] = false;
        dfsMark(root,0,target,K);
        return ans;
    }
};

 int main() {

 }