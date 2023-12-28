

function quicksort(arr, left = 0, right = arr.length - 1) {
    if (left >= right)
        return;
    let piotindex = partition(arr, left, right);
    quicksort(arr, left, piotindex - 1);
    quicksort(arr, piotindex + 1, right);
    return (arr);
}

function partition(arr, left, right) {
    let piotval = arr[right];
    let partitionindex = left;
    for (let i = left; i < right; i++) {
        if (arr[i] < piotval) {
            swap(arr, i, partitionindex);
            partitionindex++;
        }
    }
    swap(arr, right, partitionindex);
    return partitionindex;
}

function swap(arr, first, sec) {
    let temp = arr[first];
    arr[first] = arr[sec];
    arr[sec] = temp;
}

console.log(quicksort([3, 6, 9, 2, 1, 0, 2]))