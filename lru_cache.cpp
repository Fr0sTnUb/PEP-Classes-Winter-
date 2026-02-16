//Leetcode Problem 146: LRU Cache.

class LRUCache {
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(cache.find(key) == cache.end()) return -1;
        auto it = cache[key];
        int value = it->second;
        cache.erase(it);
        cache[key] = value;
        return value;
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            cache.erase(cache[key]);
        }
        else if(cache.size() == capacity){
            cache.erase(cache.begin());
        }
        cache[key] = value;
    }
private:
    int capacity;
    unordered_map<int, list<pair<int, int>>::iterator> cache;
    list<pair<int, int>> cacheList;
};
