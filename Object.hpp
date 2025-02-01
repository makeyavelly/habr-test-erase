class Object {
public:
    explicit Object(int id);
    ~Object();

private:
    int m_id;

    template <typename T>
    friend T &operator<<(T &stream, const Object &object) {
        stream << object.m_id;
        return stream;
    }
};
