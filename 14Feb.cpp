//question no : 1352 (LC)
class ProductOfNumbers {

vector<int> stream = {1};
int n ;
int zero_idx; 
public:
    ProductOfNumbers() {
        n = 1;
       zero_idx = -1;
    }
    
    void add(int num) {
        if(num==0) zero_idx = n;
        if(stream.back()==0) stream.push_back(num);
        else stream.push_back(stream.push_back()*num);
        n++;
    }
    
    int getProduct(int k) {
     if(zero_idx >= n-k) return 0;   
     if(stream[n-k-1] == 0) return stream[n-1];
        
       else return stream[n-k-1]/stream[n-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
