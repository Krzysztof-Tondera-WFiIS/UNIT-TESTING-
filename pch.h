#pragma once
#include <initializer_list>
#include <list>

template<typename T>
// feel free to add/delete methods of LinkedList class, this file is suggestion rather than requirement
class LinkedList
{
public:
    LinkedList()
    {

    }
    LinkedList(const std::initializer_list<T>& newValues)
    {
        list.assign(newValues);
    }
    void pushFront(const T& newValue)
    {
        list.push_front(newValue);
    }
    void pushBack(const T& newValue)
    {
        list.push_back(newValue);
    }
    [[nodiscard]] T popFront()
    {
        T temp = this->get(0);
        list.pop_front();
        return temp;
    }
    [[nodiscard]] T popBack()
    {
        T temp = this->get(0);
        list.pop_back();
        return temp;
    }
    [[nodiscard]] unsigned getSize() const
    {
        return list.size();
    }
    [[nodiscard]] bool isEmpty() const
    {
        return list.empty();
    }
    void clear()
    {
        list.clear();
    }
    T get(int num) {
        int index = 0;
        for (T i : list) {
            if (index == num) {
                return i;
            }
            index++;
        }
    }

    T operator[](unsigned index)
    {
        return get(index);
    }

    ~LinkedList()
    {
        clear();
    }

private:
    std::list<T> list;

};