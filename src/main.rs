use rust_binding_example::{getAvgHeight, Person, growUp};

fn main() {
    let avg_height: f64 = unsafe { getAvgHeight(30.0, 120.0, 1000.0) };
    println!("From Rust: Average height: {}", avg_height);
    let mut name = [0i8;32];
    for (i, x) in "DrWho".chars().enumerate() {
        name[i] = x as i8;
    }

    let mut person = Person {id: 2, name, age: 30 };
    unsafe { growUp(&mut person) };
}
