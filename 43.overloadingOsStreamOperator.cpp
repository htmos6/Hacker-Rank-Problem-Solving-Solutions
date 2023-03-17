ostream& operator<<(ostream& os, const Person& person)
{
    os << "first_name=" << person.get_first_name() <<  ",last_name=" << person.get_last_name();
    return os;
}
