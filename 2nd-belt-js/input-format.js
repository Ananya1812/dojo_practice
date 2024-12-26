// single line inputs

process.stdin.on("data", (data) => {
  let input = data.toString().trim();
  console.log(input);
});


// array inputs
process.stdin.on("data", (data) => {
  const input = data.toString().trim().split("\n");
  const size = parseInt(input[0]);
  const array = input[1].split(" ").map(Number);
  console.log(size);
  console.log(array.join(" "));
});
