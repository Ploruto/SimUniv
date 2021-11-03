#ifndef SU_EVENT
#define SU_EVENT
#include <type_traits>
#include "../../../entities/entity.hpp"
#include "./eventData.hpp"
#include <vector>
namespace event
{
    template <class T>
    class Event
    {
        static_assert(std::is_base_of<entity::Entity, T>::value, "T must inherit from Entity!");

    private:
        T *m_entity;
        std::vector<eventData> event_data_list = new std::vector<eventData>;

    public:
        void call_event_handler()
        {
            for (auto &&event_data : this->event_data_list)
            {
                (this->m_entity->event_entity_handler)(event_data.function_id, event_data.function_arg_id, event_data.arg_value);
            }
        }

        Event(T *entity, unsigned short function_id, unsigned short arg_id, unsigned short priority, short arg_value)
            : m_entity(entity), m_function_id(function_id), m_arg_id(arg_id), m_priority(priority), m_arg_value(arg_value)
        {
        }

        Event(T *entity, unsigned short function_id, unsigned short arg_id, unsigned short priority)
            : m_entity(entity), m_function_id(function_id), m_arg_id(arg_id), m_priority(priority) {}

        void set_arg_value(short value)
        {
            this->m_arg_value = value;
        }
    };
}
#endif