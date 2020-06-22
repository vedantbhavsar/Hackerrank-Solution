function getMaxLessThanK(n, k){

    return ((k | (k - 1)) > n) ? (k - 2) : (k - 1);

}

function main() {
    const q = +(readLine());
    
    for (let i = 0; i < q; i++) {
        const [n, k] = readLine().split(' ').map(Number);
        
        console.log(getMaxLessThanK(n, k));
    }
}
