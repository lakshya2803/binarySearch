public class binary_search_using_java{
  public int binary_search(int[] arr, int target){
    int n = arr.length;
    int s = 0;
    int l = n-1;
    
    while(s <= l) {
      int mid = s + (l-s)/2;

      if(arr[mid] == target) {
        return mid;
      }
      else if(arr[mid] < target) {
        s = mid+1;
      }
      else{
        l = mid-1;
      }
    }
    return -1;
  }
  public static void main(String[] args){
    int[] arr = {1,5,7,8,9,12,18,20,25,29,32,38,40};
    int target = 25;

    int result = binary_search(arr,target);

    if(result == -1) {
      System.out.println("Target element not found in the array");
    }
    else{
      System.out.println("Target element found at " + result + " index");
    }
  }
}
