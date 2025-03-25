//
// Created by W0491179 on 2025-03-25.
//

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iomanip>
#include <iostream>
#include <memory>
#include <span>

class BST {
    struct Node;

    using NodePtr = std::unique_ptr<Node>;

    struct Node {
        int _data {-1};
        NodePtr _left {nullptr};
        NodePtr _right {nullptr};
    };

    NodePtr _root {nullptr};
    public:
    void insert(int num);
    void insert(int num, NodePtr& node);
    void remove(int num);
    void print_tree(std::ostream& output, const NodePtr& node, int indent);
    void save_array(std::span<int> array);
    void save_array(std::span<int> array, NodePtr& node);
    friend std::ostream& operator<<(std::ostream& os, BST& tree);

};



#endif //BINARY_SEARCH_TREE_H
