class Solution {
public:
    int getCount(Node *root, int k) {

        vector<int> costs;
        queue<pair<Node*, int>> q;

        // root is at level 1
        q.push({root, 1});

        while (!q.empty()) {
            Node* node = q.front().first;
            int level = q.front().second;
            q.pop();

            // If node is a leaf
            if (node->left == NULL && node->right == NULL) {
                costs.push_back(level);
            }

            if (node->left != NULL) {
                q.push({node->left, level + 1});
            }

            if (node->right != NULL) {
                q.push({node->right, level + 1});
            }
        }

        // Visit cheapest leaves first
        sort(costs.begin(), costs.end());

        int count = 0;

        for (int cost : costs) {
            if (k < cost)
                break;

            k -= cost;
            count++;
        }

        return count;
    }
};