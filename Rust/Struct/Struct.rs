struct A;
impl A {
    fn test(&self) {
        println!("hello");
    }
}


fn main() {
    let st = A;
    st.test();
}