private fun selectionSort(arr: IntArray, n: Int): IntArray {
    for (i in 0 until n) {
        var index = i
        for (j in i + 1 until n) {
            if (arr[j] < arr[index]) {
                index = j
            }
        }
        val menor = arr[index]
        arr[index] = arr[i]
        arr[i] = menor
    }

    return arr
}

fun main() {
    print("Digite o tamanho do Array: ")
    val n: Int = readLine()!!.toInt()
    var arr1 = IntArray(n)

    for (i in 0 until n) {
        print("Digite o elemento do Array: ")
        arr1[i] = readLine()!!.toInt()
    }

    arr1 = selectionSort(arr1, n)

    println("Hello HacktoberFest!")
    for (i in 0 until n) {
        print(arr1[i].toString() + " ")
    }
}
