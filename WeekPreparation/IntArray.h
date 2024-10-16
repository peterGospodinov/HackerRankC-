#pragma once
class IntArray {
private:
	int* m_ptr{ nullptr };
	int m_size{ 0 };

	bool IsValidIndex(int index) const;

public:
	IntArray() = default;
	explicit IntArray(int size);	
	~IntArray();
	int Size() const;
	bool IsEmpty() const;
	int& operator[](int index);
	int operator[](int index) const;
};