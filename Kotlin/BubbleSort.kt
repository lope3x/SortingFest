fun main() {
    print("Digite o tamanho do Array: ")
    val n = readLine()!!.toInt()
    val arr = IntArray(n)

    for (i in 0 until n) {
        print("Digite o elemento do Array: ")
        arr[i] = readLine()!!.toInt()
    }

    bubbleSort(arr, n)

    println("Hello HacktoberFest!")
    print(arr.asList())
}


internal fun bubbleSort(arr: IntArray, n: Int) {
    var i: Int
    var change = true
    var temp: Int

    while (change) {
        change = false
        i = 0
        while (i < n - 1) {
            if (arr[i + 1] < arr[i]) {
                temp = arr[i]
                arr[i] = arr[i + 1]
                arr[i + 1] = temp
                change = true
            }
            i++
        }
    }
}
