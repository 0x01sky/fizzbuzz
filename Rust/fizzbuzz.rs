use std::io;

fn fizzbuzz(n : u32) {
   for i in 1..=n {
       if i % 5 == 0 && i % 3 == 0 {
           print!("FizzBuzz ");
       }
       else if i % 3 == 0 {
           print!("Fizz ");
       }
       else if i % 5 == 0 {
           print!("Buzz ");
       }
       else{
           print!("{} ",i);
       }  
   }
}

fn main(){
    
    println!("Type any number:");
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    
    let n: u32 = input.trim().parse().unwrap();
    println!("{:?}", fizzbuzz(n));
}
