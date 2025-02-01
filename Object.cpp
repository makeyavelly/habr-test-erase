#include "Object.hpp"

#include <iostream>

Object::Object(int id)
    : m_id(id) {
    std::cout << "Create: " << m_id << std::endl;
}

Object::~Object() {
    std::cout << "Delete: " << m_id << std::endl;
}
