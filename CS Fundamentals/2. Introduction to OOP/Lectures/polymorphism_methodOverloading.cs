using System;

class JIPCStudent{
  // Method overloading (Compile time polymorphism)
  public void quiz(){
    Console.WriteLine("Quiz for practice!");
  }

  public void quiz(int duration){
    Console.WriteLine("Quiz for preparation!");
  }

  public void quiz(double fractionDuration){
    Console.WriteLine("Quiz for preparation! with fraction duration");
  }

  public void quiz(int startTime, int endTime, int duration){
    Console.WriteLine("Quiz with time!");
  }
}

class Program {
  public static void Main (string[] args) {
    JIPCStudent jipcStudent = new JIPCStudent();

    jipcStudent.quiz();
    jipcStudent.quiz(10);
    jipcStudent.quiz(10.30);
    jipcStudent.quiz(10, 11, 10);
  }
}