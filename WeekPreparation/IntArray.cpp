#include "pch.h"
#include "IntArray.h"
#include "Exceptions.h"

IntArray::IntArray(int size) {
	if (size != 0) {
		m_ptr = new int[size] {};
		m_size = size;
	}
}

IntArray::~IntArray() {
	delete[] m_ptr;
}

bool IntArray::IsValidIndex(int index) const {
	return (index >= 0) && (index < m_size);
}

int IntArray::Size() const {
	return m_size;
}
bool IntArray::IsEmpty() const {
	return (m_size == 0);
}

int& IntArray::operator[] (int index) {
	if (!IsValidIndex(index)) {
		throw IndexOutOfBoundsException{};
	}
	return m_ptr[index];
}

int IntArray::operator[] (int index) const {
	if (!IsValidIndex(index)) {
		throw IndexOutOfBoundsException{};
	}
	return m_ptr[index];
}