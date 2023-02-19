class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> result;
        double Kelvin, Fahrenheit;
        Kelvin = celsius + 273.15;
        Fahrenheit = celsius * 1.80 + 32.00;
        result.push_back(Kelvin);
        result.push_back(Fahrenheit);
        return result;
    }
};