using System;

class condition {
  public static void Main (string[] args) {
    int a = 10, b = 200, c = 30;

    if(a > b && a > c){
      Console.WriteLine("A is greater");
    }
    else if(b > c && b > a){
      Console.WriteLine("B is greater");
    }else{
      Console.WriteLine("C is greater");
    }
  }
}