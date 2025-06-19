using System;

class array {
  public static void Main (string[] args) {
    int n = int.Parse(Console.ReadLine());

    // 1D array------------
    // int[] arr = new int[n];
    // for(int i = 0; i < n; i++){
    //   arr[i] = int.Parse(Console.ReadLine());
    // }

    // for(int i = 0; i < n; i++){
    //   Console.WriteLine(arr[i] + 2);
    // }


    // print using foreach loop------------
    // foreach (int u in arr)
    // {
    //     Console.WriteLine(u + 2);
    // }

    
    // 2D array------------
    // int[][] arr = new int[n][];
    // for(int i = 0; i < n; i++){
    //   arr[i] = new int[3];
    // }

    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < 3; j++){
    //     arr[i][j] = int.Parse(Console.ReadLine());
    //   }
    // }

    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < 3; j++){
    //     Console.Write(arr[i][j] + " ");
    //   }
    //   Console.WriteLine();
    // }


    // 2D array another way------------
    int m = int.Parse(Console.ReadLine());
    int[,] arr = new int[n, m];

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        arr[i, j] = int.Parse(Console.ReadLine());
      }
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        Console.Write(arr[i, j] + " ");
      }
      Console.WriteLine();
    }
  }
}