#include <bits/stdc++.h>
using namespace std;

template <typename K, typename V>
class LRUCache {
private:
    int capacity;
    list<pair<K, V>> cache;
    unordered_map<K, list<pair<K, V>>::iterator> map;

public:
    LRUCache(int capacity) : capacity(capacity) {}

    int get(K key) {
        auto it = map.find(key);
        if (it == map.end()) {
            return -1;
        }
        cache.splice(cache.begin(), cache, it->second);
        return it->second->second;
    }

    void put(K key, V value) {
        auto it = map.find(key);
        if (it != map.end()) {
            it->second->second = value;
            cache.splice(cache.begin(), cache, it->second);
            return;
        }

        if (cache.size() >= capacity) {
            auto last = cache.end();
            last--;
            map.erase(last->first);
            cache.pop_back();
        }

        cache.emplace_front(key, value);
        map[key] = cache.begin();
    }
};

int main() {
    LRUCache<int, string> lruCache(3);

    lruCache.put(1, "one");
    lruCache.put(2, "two");
    lruCache.put(3, "three");

    cout << "Get 2: " << lruCache.get(2) << endl;
    cout << "Get 4: " << lruCache.get(4) << endl;

    lruCache.put(4, "four");
    cout << "Get 1 after adding 4: " << lruCache.get(1) << endl;

    return 0;
}