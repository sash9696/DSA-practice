


let arr = [13 ,46 ,24 ,52 ,20 ,9];
let n = arr.length;

function selectionSort(arr, n){

    for (let i = 0; i <= n - 2; i ++){


        let minIndex = i;

        for(let j = i; j <= n -1 ; j ++){

            if(arr[j] < arr[minIndex])
            minIndex = j;
        };

        let temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    console.log(arr)

};


selectionSort(arr, n);