#ifndef SU_EVENTDATA
#define SU_EVENTDATA
namespace event
{
    template <typename Entity>
    struct eventData
    {
    public:
        unsigned short priority;
        unsigned short function_id;
        unsigned short function_arg_id;
        short arg_value;

    public:
        eventData(unsigned short function_id, unsigned short arg_id, short arg_value, unsigned short priority);

        void set_arg_value(short new_value)
        {
            this->arg_value = new_value;
        }

        void set_function_id(unsigned short id)
        {
            this->function_id = id;
        }

        void set_arg_id(unsigned short id)
        {
            this->function_arg_id = id;
        }

        void set_priority(unsigned short priority)
        {
            this->priority = priority;
        }
    };

}

#endif