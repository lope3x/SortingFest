package main

import "fmt"

func insertionSort(arr []int) {
	var j int
	var element int
	for index := 1; index < len(arr); index++ {
		j = index-1
		element = arr[index]
		
		for j >= 0 && arr[j] > element {
			arr[j+1] = arr[j]
			j--
		}

		if j != index-1 {
			arr[j+1] = element
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

	insertionSort(arr)
	
	fmt.Printf("Hello Hacktoberfest!\n")
	for index := 0; index < n; index++ {
		fmt.Printf("%d ", arr[index])
	}

}