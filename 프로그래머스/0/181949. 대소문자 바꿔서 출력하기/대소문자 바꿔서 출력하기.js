const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = [line];
}).on('close',function(){
    const str = input[0];
    let result = "";

    for (let a of str) {
        if (a === a.toUpperCase()) {
            result += a.toLowerCase();
        } else {
            result += a.toUpperCase();
        }
    }

    console.log(result);
});