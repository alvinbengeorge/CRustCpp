fn void_function() {
    println!("Hello world");
}

fn add(a: i32, b: i32) -> i32 {
    a+b
}

fn main() {
    let y = add(1,2);
    println!("{}", y);
    void_function();
}