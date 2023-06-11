use std::io;

fn main() {
    let mut biggest: f32 = 0.0;
    let mut smallest: f32 = 0.0;
    let mut average: f32 = 0.0;

    println!("How many values?: ");
    let mut values_number = String::new();
    io::stdin()
        .read_line(&mut values_number)
        .expect("Failed to read input.");

    let values_number: i32 = values_number
        .trim()
        .parse()
        .expect("Invalid input.");

    let mut data: Vec<f32> = Vec::new();

    for i in 0..values_number {
        println!("Data {}: ", i + 1);
        let mut input = String::new();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read input.");

        let value: f32 = input.trim().parse().expect("Invalid input.");
        data.push(value);

        if i == 0 {
            biggest = value;
            smallest = value;
        } else {
            if value > biggest {
                biggest = value;
            }
            if value < smallest {
                smallest = value;
            }
        }
        average += value;
    }
    average /= values_number as f32;

    println!("Values: {}", values_number);
    println!("Biggest: {:.2}", biggest);
    println!("Smallest: {:.2}", smallest);
    println!("Average: {:.2}", average);
}
