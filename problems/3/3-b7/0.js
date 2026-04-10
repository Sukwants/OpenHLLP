const fs = require('fs');

let d = [10000, 5000, 2000, 1000, 500, 100, 50, 10, 5, 2, 1];

let counter = 1;
for (let i = 1; i <= 10; i++) {
    for (let k = 1; k * d[i] < d[i - 1]; k++) {
        fs.writeFileSync(`${counter++}.in`, ((k * d[i] + Math.floor(Math.random() * Math.min(d[0] - k * d[i] - 1, d[i]))) / 100).toFixed(2) + '\n');
    }
}