using System;

namespace UsingIf
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter a number: ");
            int number = int.Parse(Console.ReadLine());

            if (number > 0)
            {
                Console.WriteLine("The number is positive.");
            }
            else if (number < 0)
            {
                Console.WriteLine("The number is negative.");
            }
            else
            {
                Console.WriteLine("The number is zero.");
            }
            Addition(5, 10);
            Addition(20, 30);
            Addition(100, 200);
        }
        static void Addition(int a, int b)
        {
            int sum = a + b;
            Console.WriteLine($"The sum of {a} and {b} is {sum}.");
        }
    }

}