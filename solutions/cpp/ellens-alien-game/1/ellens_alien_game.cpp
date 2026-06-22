namespace targets {
// TODO: Insert the code for the alien class here
class Alien{
    
    int health;
    public:
    int x_coordinate,y_coordinate;
        Alien(int a,int b);
    int get_health();
    bool hit();
    bool is_alive();
    bool teleport(int x_new,int y_new);
    bool collision_detection(Alien a);
};
    Alien::Alien(int a,int b)
    {x_coordinate=a;y_coordinate=b;health=3;}
    int Alien::get_health(){return health;}
    bool Alien::hit(){if(health>0){health-=1;}return true;}
    bool Alien::is_alive(){return (health>0);}
    bool Alien::teleport(int x_new,int y_new){x_coordinate=x_new;y_coordinate=y_new;return true;}
    bool Alien::collision_detection(Alien a){return (a.x_coordinate==x_coordinate&&a.y_coordinate==y_coordinate);}
}  // namespace targets
