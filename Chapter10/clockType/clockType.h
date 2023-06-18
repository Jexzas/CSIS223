class clockType {
    int hr;
    int min;
    int sec;
    public:
        clockType(int = 0, int = 0, int = 0);
        void setTime(int, int, int);
        void printTime() const;
        void incrementSeconds();
        void incrementHours();
        void incrementMinutes();
        bool equalTime(const clockType&) const;
    // class can only have one destructor
    ~clockType();
};