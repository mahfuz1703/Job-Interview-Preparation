/*
    1. What is Dynamic Programming?
    - Dynamic Programming (DP) is a method for solving complex problems by breaking them down into simpler subproblems.
    - It is applicable when the problem can be divided into overlapping subproblems and has optimal substructure.
    - DP is often used in optimization problems where the goal is to find the best solution among many possible solutions.

    - Common techniques in DP include:
        1. Memoization: Storing results of expensive function calls and reusing them when the same inputs occur again.
        2. Tabulation: Building a table in a bottom-up manner to store intermediate results.

    - Examples of problems that can be solved using DP:
        1. Fibonacci sequence
        2. Knapsack problem
        3. Longest common subsequence
        4. Matrix chain multiplication

    2. Characteristics of Dynamic Programming
    - Overlapping Subproblems: The problem can be broken down into smaller subproblems that are reused multiple times.
    - Optimal Substructure: The optimal solution to the problem can be constructed from optimal solutions of its subproblems.
    - DP can be implemented using either recursion with memoization or iterative tabulation.

    3. Types of Dynamic Programming
    - Top-Down Approach (Memoization or Recursive): This approach involves solving the problem recursively and storing the results of subproblems in a data structure (like an array or a map) to avoid redundant calculations.
    - Bottom-Up Approach (Tabulation or Iterative): This approach involves solving the problem iteratively, starting from the smallest subproblems and building up to the solution of the original problem. It typically uses a table to store the results of subproblems.

    4. Bottom up vs. Top Down:
    - Bottom Up - I'm going to learn programming. Then, I will start practicing. Then, I will start taking part in contests. Then, I'll practice even more and try to improve. After working hard like crazy, I'll be an amazing coder.
    
    - Top Down - I will be an amazing coder. How? I will work hard like crazy. How? I'll practice more and try to improve. How? I'll start taking part in contests. Then? I'll practicing. How? I'm going to learn programming.

*/