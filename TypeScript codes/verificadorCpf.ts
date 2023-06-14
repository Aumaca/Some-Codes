class CPF {
    readonly original: string;
    private calculated: string;
    public isValid: boolean;

    constructor(original: string) {
        this.original = original;
        this.isValid = this.checkCPF();
    }

    public checkCPF(): boolean {
        let total: number = 0;
        let toMultiply: number = 10;
        let temporaryCPF: string[] = this.original.slice(0, 9).split("");
        for (let i = 0; i < 2; i++) {
            temporaryCPF.map((digit) => {
                total += parseInt(digit) * toMultiply;
                toMultiply--;
            });
            total %= 11;
            if (total < 2) {
                temporaryCPF.push("0");
            } else {
                total = 11 - total;
                temporaryCPF.push(total.toString());
            }
            toMultiply = 11;
            total = 0;
        }
        this.calculated = temporaryCPF.join("");

        if (this.original === this.calculated) {
            return true;
        }
        return false;
    }
}

console.log(new CPF("11144477735").isValid); // true
console.log(new CPF("11144477734").isValid); // false