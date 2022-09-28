class stack {
    public:
        struct id {
            int i;
            long long int *ptr;
        };
        static id* create(id*, int, int);
        static id* push(id*, long long int, int);
        static void pop(id*, int);
        static void print_stack(id*, int);
};