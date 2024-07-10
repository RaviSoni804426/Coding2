const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let t = 0;

rl.question('Enter the number of test cases: ', (answer) => {
  t = parseInt(answer);

  for (let i = 0; i < t; i++) {
    rl.question('Enter a number: ', (n) => {
      const asciiValue = parseInt(n);

      if (asciiValue >= 65 && asciiValue <= 90) {
        console.log(String.fromCharCode(asciiValue));
      } else if (asciiValue >= 97 && asciiValue <= 122) {
        console.log(String.fromCharCode(asciiValue));
      } else {
        console.log('Wrong ASCII number');
      }

      if (i === t - 1) {
        rl.close();
      }
    });
  }
});