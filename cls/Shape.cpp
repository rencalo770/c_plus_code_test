class Shape
{

public:
    Shape(/* args */);
    ~Shape();
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

Shape::Shape(/* args */)
{
}

Shape::~Shape()
{
}
