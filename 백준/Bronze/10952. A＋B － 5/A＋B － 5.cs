int A = 0;
int B = 0;

while(true)
{
    string[] num = (Console.ReadLine().Split(' '));
    A = int.Parse(num[0]);
    B = int.Parse(num[1]);
    if (A == 0 && B == 0) break;
    else Console.WriteLine(A + B);
}