use std::io;

fn main() {
    let mut num = String::new();
    let mut sum: u64 = 0;
    let mut digits_added: u64 = 0;

    println!("Number above: ");
    io::stdin().read_line(&mut num).expect("Problem!");
    let num: u64 = num.trim().parse().expect("Error parsing");

    let mut temp_num = num;

    while temp_num != 0 {
        digits_added = digits_added + 1;
        sum = sum + temp_num % 10;
        temp_num = temp_num / 10;
    }
    println!("Digits added: {}", digits_added);
    println!("Sum: {}", sum);
}