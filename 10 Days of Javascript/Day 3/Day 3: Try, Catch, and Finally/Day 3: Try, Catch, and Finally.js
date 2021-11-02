

/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    let newString = "";

    for (let i = s.length - 1; i >= 0; i--){
        newString += s[i];
    }

    if(newString == ""){
        console.log("s.split is not a function");
        console.log(s);
        return false;
    }
    console.log(newString);
    return false;
}

