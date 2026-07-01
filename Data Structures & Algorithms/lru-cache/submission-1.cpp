class LRUCache {
public:
   vector<pair<int,int>>v;
   int n;
    LRUCache(int capacity) {
        n=capacity;
    }
    
    int get(int key) {

        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                int val=v[i].second;
                pair<int ,int> temp=v[i];
                v.erase(v.begin()+i);
                v.push_back(temp);
                return val;
            }

            
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                v.erase(v.begin()+i);
                v.push_back({key , value});
                return ;
            }
        }
        if(v.size()==n){
            v.erase(v.begin());
            v.push_back({key , value});
        } else v.push_back({key , value});

        return;
        
    }
};
