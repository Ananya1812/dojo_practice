process.stdin.on('data',(data)=>{
    let input = data.toString().trim().split('\n');
    const n = parseInt(input[0]);
    const array = input[1].split(' ').map(Number);
    const cumulativeSum = []
    const sum = 0
    for (let i = 0;i<n;i++){
        sum += array[i];
        cumulativeSum = sum
    }
    console.log(cumulativeSum.join(" "))
})