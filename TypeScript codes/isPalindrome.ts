// JS or TS files can't perform a input() outside the browser.

function checkPalindrome(word: string): void {
    let wordWithoutSpace: string = word.split(' ').join('');
    let backwardsWordWithSpace: string = word.split('').reverse().join('');
    let backwardsWordWithoutSpace: string = backwardsWordWithSpace.split(' ').join('');
    let result: string = (wordWithoutSpace == backwardsWordWithoutSpace) ? "are equal, so it's a palindrome!" : "are different, so it's not a palindrome...";
    console.log(`"${word}" and "${backwardsWordWithSpace}" ${result}`);
}

console.log("This algorithm checks if the provided word is a palindrome. \n");

let word: string;
word = "a sacada da casa";
checkPalindrome(word);
word = "carlos augusto";
checkPalindrome(word);
word = "reviver";
checkPalindrome(word);
word = "luz azul";
checkPalindrome(word);