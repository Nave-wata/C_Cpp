#include "object.h"

int Object::m_objectNum = 0;

Object::Object() {
    m_objectNum++;
}

Object::~Object() {
    m_objectNum--;
}
