class MyHashSet {

    private List<Integer> array;

    public MyHashSet() {
        this.array = new ArrayList<>();
    }
    
    public void add(int key) {
        if(!contains(key)){
            this.array.add(key);
        }else{
            return;
        }
    }
    
    public void remove(int key) {
        if(!contains(key)){
            return;
        }else{
            this.array.remove(Integer.valueOf(key));
        }
    }
    
    public boolean contains(int key) {
        for(int num : this.array){
            if(num == key) return true;
        }

        return false;
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */