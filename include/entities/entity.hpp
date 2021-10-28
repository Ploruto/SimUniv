#ifndef SW_ENTITY
#define SW_ENTITY

namespace entity
{
    class Entity
    {
    private:
        unsigned long m_uid;
        unsigned short m_type;

    public:
        Entity(unsigned short type);
        Entity();
        unsigned long get_uid();
        void set_uid(unsigned long);

        unsigned short get_type();
        void set_type(unsigned short);
    };

}
#endif