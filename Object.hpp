class Object {
public:
    explicit Object(int id);

    Object(Object &other) = delete;
    Object &operator=(Object &other) = delete;

    Object(Object &&other);
    Object &operator=(Object &&other);

    ~Object();

    void clear();

private:
    int m_id;

    template <typename T>
    friend T &operator<<(T &stream, const Object &object) {
        stream << object.m_id;
        return stream;
    }
};
