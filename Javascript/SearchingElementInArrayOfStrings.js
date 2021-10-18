let str = ['Java', 'Python', 'Javascript', 'Django', 'Angular', 'Nodejs'];
let val = prompt('Enter Element name :');

// Using array function
console.log(str.includes(val));

// Using if statement
if (str.includes(val)) {
    console.log(val);
} else {
    console.log('Element not found!!!');
}

// for (let j=0; j<str.length; j++) {
//     if (str[j].match(val)) {
//         console.log(val)
//     }
// }
