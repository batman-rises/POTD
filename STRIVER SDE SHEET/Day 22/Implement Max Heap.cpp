class Solution{
public:
    vector<int> heap;

    void initializeHeap(){
        heap.clear();
    }

    void heapifyUp(int i){
        while(i > 0){
            int parent = (i - 1) / 2;

            if(heap[parent] < heap[i]){
                swap(heap[parent], heap[i]);
                i = parent;
            }
            else{
                break;
            }
        }
    }

    void heapifyDown(int i){
        int n = heap.size();

        while(true){
            int largest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if(left < n && heap[left] > heap[largest])
                largest = left;

            // strict > ensures LEFT child is preferred when equal
            if(right < n && heap[right] > heap[largest])
                largest = right;

            if(largest == i) break;

            swap(heap[i], heap[largest]);
            i = largest;
        }
    }

    void insert(int key){
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    void changeKey(int index, int new_val){
        int old_val = heap[index];
        heap[index] = new_val;

        if(new_val > old_val)
            heapifyUp(index);
        else if(new_val < old_val)
            heapifyDown(index);
    }

    void extractMax(){
        if(heap.empty()) return;

        heap[0] = heap.back();
        heap.pop_back();

        if(!heap.empty())
            heapifyDown(0);
    }

    bool isEmpty(){
        return heap.empty();
    }

    int getMax(){
        return heap[0];
    }

    int heapSize(){
        return heap.size();
    }
};