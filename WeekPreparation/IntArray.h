#pragma once
template<typename T>
class IntArray {
private:
	T* m_ptr{ nullptr };
	int m_size{ 0 };
	bool IsValidIndex(int index) const;

public:
	IntArray() = default;
	explicit IntArray(int size);
	void MoveArray(IntArray&& source);
	IntArray(const IntArray& source);
	~IntArray();

	int Size() const;
	bool IsEmpty() const;
	
	T& operator[](int index); 
	T operator[](int index) const;
};

template<typename T>
IntArray<T>::IntArray(int size) {
	if (size != 0) {
		m_ptr = new T[size]{};
		m_size = size;
	}
}

template<typename T>
void IntArray<T>::MoveArray(IntArray&& source) {
	m_ptr = source.m_ptr;
	m_size = source.m_size;

	//Clear source
	source.m_ptr = nullptr;
	source.m_size = 0;
}

template<typename T>
IntArray<T>::IntArray(const IntArray& source) {
	if (!source.IsEmpty())
	{
		m_size = source.m_size;
		m_ptr = new T[m_size]{};

		for (int i = 0; i < m_size; i++) {
			m_ptr[i] = source.m_ptr[i];
		}
	}
}

template<typename T>
IntArray<T>::~IntArray() {
	delete[] m_ptr;
}

template<typename T>
bool IntArray<T>::IsValidIndex(int index) const {
	return (index >= 0) && (index < m_size);
}

template<typename T>
int IntArray<T>::Size() const {
	return m_size;
}

template<typename T>
bool IntArray<T>::IsEmpty() const {
	return (m_size == 0);
}

template<typename T>
T& IntArray<T>::operator[] (int index) {
	if (!IsValidIndex(index)) {
		throw IndexOutOfBoundsException{};
	}
	return m_ptr[index];
}

template<typename T>
T IntArray<T>::operator[] (int index) const {
	if (!IsValidIndex(index)) {
		throw IndexOutOfBoundsException{};
	}
	return m_ptr[index];
}