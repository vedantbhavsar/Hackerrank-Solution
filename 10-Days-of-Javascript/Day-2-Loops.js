/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */

function vowelsAndConsonants(s) {
    
    let vowelArray = [];
    let consonantsArray = [];
    const vowel = ['a', 'e', 'i', 'o', 'u'];

    for (let i = 0; i < s.length; i++) {
        
        if (vowel.indexOf(s[i]) > -1)
            vowelArray.push(s[i]);
        
        else
            consonantsArray.push(s[i]);
        
    }

    for (let i = 0; i < vowelArray.length; i++)
        console.log(vowelArray[i]);
    
    for (let i = 0; i < consonantsArray.length; i++)
        console.log(consonantsArray[i]);

}

function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
