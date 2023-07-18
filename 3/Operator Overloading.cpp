class Matrix
{
    public:
    vector<vector<int> > a;
    Matrix & operator + (const Matrix &y)
    {
        for (int i=0; i<y.a.size(); ++i)
        {
            for (int j=0; j<y.a[0].size(); ++j)
            {
                this->a[i][j] = this->a[i][j] + y.a[i][j];
            }
        }
    return *this;
    }
};