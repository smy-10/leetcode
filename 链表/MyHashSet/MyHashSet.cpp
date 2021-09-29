// MyHashSet.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include <vector>
using namespace std;

class MyHashSet {
public:
    MyHashSet() {

    }

    void add(int key) {
        m_hashSet.push_back(key);
    }

    void remove(int key) {
		for (auto it = m_hashSet.begin(); it != m_hashSet.end();)
		{
			if (*it == key)
				it = m_hashSet.erase(it);
			else
				it++;
		}
    }

    bool contains(int key) {
        for (const auto& value : m_hashSet)
        {
            if (value == key)
                return true;
        }
        return false;
    }

private:
    std::vector<int> m_hashSet;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main()
{
    MyHashSet obj;
    obj.add(1);
    obj.add(2);
    obj.remove(2);
    auto a = obj.contains(2);

    std::cout << "Hello World!\n";
}
