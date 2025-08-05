class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        return ((coordinates[0] - 'a') + (coordinates[1] - '0')) % 2 == 0;
    }
}; 

// class Solution
// {
// public:
//     bool squareIsWhite(string coordinates)
//     {
//         char letter = coordinates[0];
//         int number = coordinates[1] - '0';

//         if ((letter == 'b' || letter == 'd' || letter == 'f' ||
//              letter == 'h') &&
//             number % 2 == 1)
//             return true;
//         else if ((letter == 'a' || letter == 'c' || letter == 'e' ||
//                   letter == 'g') &&
//                  number % 2 == 0)
//             return true;

//         return false;
//     }
// };