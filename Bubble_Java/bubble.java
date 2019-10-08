import java.io.*;
import java.util.Scanner;

public class bubble  {
    public static void main(String[] args) {
    Scanner scan = new Scanner(System.in); 

    int n;
    n = scan.nextInt();
    int [] arr = new int[n];

    for (int i = 0; i < n; i++)
    arr[i] = scan.nextInt();

    bubbleSort(arr, n);

    System.out.println("Hello HacktoberFest!\n");
    for (int i = 0; i < n; i++)
        System.out.print(arr[i] + " ");

    scan.close();
}



static void bubbleSort(int [] arr, int n) {
    int i;
    boolean change = true;
    int temp;

    while (change)
    {
        change = false;
        for (i = 0; i < n-1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                change = true;
            }
        }
    }
}

}