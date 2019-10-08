package main

import "fmt"

func bubbleSort(arr []int) {
	change := true

	for change{
		change = false
		for j := 0; j < len(arr)-1; j++ {
			if arr[j] > arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
				change = true
			}
		}
	}	
}

func main() {
	var n int

	fmt.Scanf("%d", &n)
	arr := make([]int, n)

	for index := 0; index < n; index++ {
		fmt.Scanf("%d", &arr[index])
	}

	bubbleSort(arr)
	
	fmt.Printf("Hello Hacktoberfest!\n")
	for index := 0; index < n; index++ {
		fmt.Printf("%d ", arr[index])
	}

}