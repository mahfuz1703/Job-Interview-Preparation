using System;

class loop {
  public static void Main (string[] args) {
    int n = int.Parse(Console.ReadLine());

    int sum = 0;
    // for(int i = 1; i <= n; i++){
    //   sum += i;
    // }
    // Console.WriteLine(sum);

    int i = 1;
    while(i <= n){
      sum += i;
      i++;
    }
    Console.WriteLine(sum);
  }
}