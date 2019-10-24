package main

import "fmt"

func selectionSort(arr []int) {
	n := len(arr)

	for i := 0; i < n-1; i++ {
		min := i
		for j := i+1; j < n; j++ {
			if arr[j] < arr[min] {
				min = j
			}
		}
		arr[i], arr[min] = arr[min], arr[i]
	}
}

func main() {
	var n int

	fmt.Scanf("%d", &n)
	arr := make([]int, n)

	for index := 0; index < n; index++ {
		fmt.Scanf("%d", &arr[index])
	}

	selectionSort(arr)
	
	fmt.Printf("Hello Hacktoberfest!\n")
	for index := 0; index < n; index++ {
		fmt.Printf("%d ", arr[index])
	}

}