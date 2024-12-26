// this code does not pass all the testcases

process.stdin.on("data", (data) => {
    let input = data.toString().trim().split(' ').map(Number);

    let count0 = 0;
    let count1 = 0;
    let count2 = 0;

    for (let i = 0; i < input.length; i++) {
        if (input[i] === 0) {
            count0++;
        } else if (input[i] === 1) {
            count1++;
        } else if (input[i] === 2) {
            count2++;
        }
    }

    if (count0 === count1 && count1 === count2) {
        console.log("No");
    } else {
        console.log("Yes");
    }
});
