using System;

class Course{
  public string title;

  public void displayInfo(){
    Console.WriteLine("Course title: " + title);
  }

  public virtual void quiz(){
    Console.WriteLine("Quiz for practice!");
  }
}

class JIPCCourse : Course{
  // Method overridding (Run time polymorphism)
  public override void quiz(){
    int startTime = 10;
    int endTime = 12;
    Console.WriteLine("Quiz for practice with time duration. Start at {0} and end at {1}", startTime, endTime);
  }
}

class Program {
  public static void Main (string[] args) {
    JIPCCourse jipccourse = new JIPCCourse();

    jipccourse.title  = "Job Interview Preparation Course";
    jipccourse.displayInfo();
    jipccourse.quiz();
  }
}