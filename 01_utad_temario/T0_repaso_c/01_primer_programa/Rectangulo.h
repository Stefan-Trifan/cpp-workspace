class Rectangulo
{
    private:
        int ancho;
        int alto;  
        
        char *name;
    public:
        Rectangulo(int ancho=2, int alto=2);
        // Rectangulo(Rectangulo rectangulo);
        ~Rectangulo(); // Destructor
        void setName(char* name);
        char* getName();
        int perimetro();
};