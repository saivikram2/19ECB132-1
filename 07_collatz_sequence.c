 C# program to print Collatz sequence
using System;
 
class GFG {
     
    static void printCollatz(int n)
    {
        // We simply follow steps
        // while we do not reach 1
        while (n != 1)
        {
            Console.Write (n + " ");
     
            // If n is odd
            if ((n & 1) == 1)
                n = 3 * n + 1;
     
            // If even
            else
                n = n / 2;
        }
     
        // Print 1 at the end
        Console.Write (n);
    }
     
    // Driver code
    static void Main()
    {
        printCollatz(6);
    }
} 
output is
  6 3 10 5 16 8 4 2 1
