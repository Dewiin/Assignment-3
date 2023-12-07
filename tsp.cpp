/*
CSCI335 Fall 2023
Assignment 2 – Medians
Name: Devin Xie
Date: Dec 5, 2023
Traveling Salesman Problem implementation
*/

#include <iostream>
#include <list>
#include <cmath>
#include <chrono>
using namespace std;

class Node {
public:
    Node(int node_id, double x_pos, double y_pos) : id(node_id), x(x_pos), y(y_pos) {}

    int distance(const Node& node) const{
        double a = x - node.x;
        double b = y - node.y;
        double c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));

        int rounded = std::round(c);
        return rounded;
    }

private:
    int id;
    double x;
    double y;
};