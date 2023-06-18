using namespace std;

class carType
{
public:   
  void set(string, string, int, string, double, int);
  void print() const;
  void setMake(string);
  string getMake() const;
  void setModel(string);
  string getModel() const;
  void setYear(int);
  int getYear() const;
  void setColor(string);
  string getColor() const;
  void setPrice(double);
  double getPrice() const;
  void setNumberDaysForSale(int);
  int getNumberDaysForSale() const;

  carType();
  carType(string, string, int, string, double, int);

private:
  string make;
  string model;
  int year;
  string color;
  double price;
  int numberDaysForSale;
};