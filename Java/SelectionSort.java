import java.util.Scanner;

public class SelectionSort{  
    public static int[] selectionSort(int[] arr, int n){

        for (int i = 0; i < n; i++)  
        {  
            int index = i;  
            for (int j = i + 1; j < n; j++){  
                if (arr[j] < arr[index]){  
                    index = j; 
                }  
            }  
            int menor = arr[index];   
            arr[index] = arr[i];  
            arr[i] = menor;  
        }

        return arr;  

    }  
       
    public static void main(String a[]){

        int[] arr1 = new int[1000];
        int n;

        Scanner in = new Scanner(System.in);

        n = in.nextInt();
          

        for(int i = 0; i < n; i++)
        {
            arr1[i] = in.nextInt();
        }

        arr1 = selectionSort(arr1, n);
         
        System.out.println("Hello HacktoberFest!");  
        for(int i = 0; i < n; i++){  
            System.out.print(arr1[i]+" ");  
        }  
    }  
}  