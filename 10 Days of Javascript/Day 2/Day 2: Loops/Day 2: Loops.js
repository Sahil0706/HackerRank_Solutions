

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    var vow = new Array();
    var cons = new Array();
    for(var i=0; i<s.length; i++){
        if(s[i]=='a' || s[i] =='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vow.push(s[i]);
            
        else
            cons.push(s[i]);
    }
    for (i = 0; i < vow.length; i++)
        console.log(vow[i]);
    for (i = 0; i < cons.length; i++)
        console.log(cons[i]);
        
    return false;
}

