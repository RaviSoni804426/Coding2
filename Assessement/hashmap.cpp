#include <bits/stdc++.h>
using namespace std;

template <typename K, typename V>
class HashMap {
public:
    struct Entry {
        K key;
        V value;
        bool is_empty;

        Entry() : is_empty(true) {}
        Entry(K k, V v) : key(k), value(v), is_empty(false) {}
    };

private:
    vector<Entry> table;
    int capacity;
    int size;
    float load_factor;

    int hash(K key) {
        return hash<K>{}(key) % capacity;
    }

    void resize() {
        int new_capacity = capacity * 2;
        vector<Entry> new_table(new_capacity);

        for (const auto& entry : table) {
            if (!entry.is_empty) {
                int index = hash(entry.key) % new_capacity;
                while (!new_table[index].is_empty) {
                    index = (index + 1) % new_capacity;
                }
                new_table[index] = entry;
            }
        }

        table = move(new_table);
        capacity = new_capacity;
        load_factor = static_cast<float>(size) / capacity;
    }

public:
    HashMap(int initial_capacity = 16, float lf = 0.75)
        : capacity(initial_capacity), size(0), load_factor(lf) {
        table.resize(capacity);
    }

    bool find(K key) {
        int index = hash(key);
        while (!table[index].is_empty) {
            if (table[index].key == key) {
                return true;
            }
            index = (index + 1) % capacity;
        }
        return false;
    }

    void insert(K key, V value) {
        if (load_factor > 0.75) {
            resize();
        }

        int index = hash(key);
        while (!table[index].is_empty && table[index].key != key) {
            index = (index + 1) % capacity;
        }

        if (table[index].is_empty) {
            table[index] = Entry(key, value);
            size++;
        } else {
            // Handle collision using separate chaining
            table[index].value = value;
        }
    }

    void remove(K key) {
        int index = hash(key);
        while (!table[index].is_empty) {
            if (table[index].key == key) {
                table[index].is_empty = true;
                size--;
                return;
            }
            index = (index + 1) % capacity;
        }
    }
};

int main() {
    HashMap<int, string> hashmap;

    hashmap.insert(1, "one");
    hashmap.insert(2, "two");
    hashmap.insert(3, "three");

    cout << "Find 2: " << (hashmap.find(2) ? "Found" : "Not Found") << endl;
    cout << "Find 4: " << (hashmap.find(4) ? "Found" : "Not Found") << endl;

    hashmap.remove(2);
    cout << "Find 2 after removal: " << (hashmap.find(2) ? "Found" : "Not Found") << endl;

    return 0;
}