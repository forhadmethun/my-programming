class KDiffPairsInArray {
    public int findPairs(int[] nums, int k) {
        /*
        Set<Integer> all = new HashSet<>();
        Set<Integer> visited = new HashSet<>();
        for(int i = 0; i < nums.length; i++){
            all.add(nums[i]);
        }
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            if(!visited.contains(nums[i])){

                    if(all.contains(Math.abs(k - nums[i]))){
                    visited.add(nums[i]);
                    visited.add(Math.abs(k - nums[i]));
                    count++;
                }


                if(all.contains(Math.abs(k + nums[i]))){
                    visited.add(nums[i]);
                    visited.add(k + nums[i]);
                    count++;
                }
            }else{
                visited.add(nums[i]);
            }

        }*/
        int count = 0;
        /*
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            Set<Integer> set = new HashSet<>();
            for(int j = i+1; j < nums.length; j++){
                if(set.contains(nums[j]))continue;
                if(map.get(nums[i])!= null){
                    int p = map.get(nums[i]) ;
                    if(p == nums[j]) continue;
                }
                if(Math.abs(nums[i] - nums[j]) == k){
                    count++;
                    map.put(nums[i], nums[j]);
                    map.put(nums[j], nums[i]);
                }
                set.add(nums[j]);
            }
        }*/
        /*
        Map<Pair,Boolean> s = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            for(int j = i+1; j < nums.length; j++){
                if(s.containsKey(new Pair(nums[i], nums[j])) || s.containsKey(new Pair(nums[i], nums[j])))continue;
                if(Math.abs(nums[i] - nums[j]) == k){
                    count++;
                    s.put(new Pair(nums[i], nums[j]), true);
                    s.put(new Pair(nums[j], nums[i]),true);
                }
                //set.add(nums[j]);
            }
        }
        */
        if (k < 0) return 0;
        
        /*
        Set<Integer> set = new HashSet<>();
        Arrays.sort(nums);
        for(int i = 0; i < nums.length; i++){
            set.add(nums[i]);
        }
        for(int i = 0; i < nums.length; i++){
            while(i + 1 < nums.length && nums[i+1] == nums[i])i++;
            if(set.contains(nums[i] - k)) count++;
            if(set.contains(nums[i] + k)) count++;
        }
        */
        
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        
        for(int num: map.keySet()){
            if( k == 0){
                if(map.get(num) > 1) count++;
            }
            else if(map.containsKey(num+k))count++;
        }                        
        return count;
    }

}
/*
class Pair{
    int a, b;
    Pair(int a,int b){
        this.a = a;
        this.b = b;
    }

    @Override
    public int hashCode() {
        return Objects.hash(a, b);
    }

    @Override
    public boolean equals (Object object) {
        boolean result = false;
        if (object == null || object.getClass() != getClass()) {
            result = false;
        } else {
            Pair p = (Pair) object;
            if (this.a == p.a && this.b == p.b) {
                result = true;
            }
        }
        return result;
    }
}
*/