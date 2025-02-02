#include "Object.hpp"

#include <iostream>

constexpr int INVALID_ID = -1;

Object::Object(int id)
    : m_id(id) {
    std::cout << "Create: " << m_id << std::endl;
}

Object::Object(Object &&other)
    : m_id(other.m_id) {
        other.m_id = INVALID_ID;
}

Object &Object::operator=(Object &&other) {
    clear();
    m_id = other.m_id;
    other.m_id = INVALID_ID;
    return *this;
}

Object::~Object() {
    std::cout << "Destroy: " << m_id << std::endl;
    clear();
}

void Object::clear() {
    if (m_id != INVALID_ID) {
        std::cout << "Delete: " << m_id << std::endl;
    }
}
