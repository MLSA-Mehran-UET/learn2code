// Recursion in javascript

// A function that call itself is called recursive function and the process called Recursion
// There must be condition to run the recursive function otherwise the function will call indefinitely


// Example of Recursive Function

function findFactorial(num){
  if(num === 1){
      return num;
  }
  return num * findFactorial(num-1) 
}

console.log(findFactorial(6));