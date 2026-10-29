class MyHashMap {

    private List<Integer> keys;
    private List<Integer> values;

    public MyHashMap() {
        this.keys = new ArrayList<>();
        this.values = new ArrayList<>();
    }
    
    public void put(int key, int value) {
        if(!keys.contains(key)){
            keys.add(key);
            values.add(value);
        }else if(keys.contains(key)){
            int index = keys.indexOf(key);
            values.set(index, value);
        }
    }
    
    public int get(int key) {
        if(!keys.contains(key)){
            return -1;
        }else{
            int index = keys.indexOf(key);
            return values.get(index);
        }
    }
    
    public void remove(int key) {
        if(keys.contains(key)){
            int index = keys.indexOf(key);
            keys.remove(index);
            values.remove(index);
        }
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */