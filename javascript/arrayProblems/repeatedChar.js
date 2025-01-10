var repeatedCharacter = function(s) {

    let n = s.length;

    let charFreq = {};

    for(let  i = 0; i <= n - 1; i ++){

        charFreq[s[i]] = (charFreq[s[i]] || 0) + 1; 
        if(charFreq[s[i]] == 2) return s[i];
        
    }

    
};


let s = "abccbaacz"


console.log(repeatedCharacter(s));