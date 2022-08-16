#ifndef BIT_FLAG
#define BIT_FALG

enum TestFlag
{
    HUNGRY = 0x1,
    SLEEPY = 0x2,
    HAPPY = 0x4,
    SAD = 0x8,
    THINKING = 0x10,
    WORKING = 0x20 
};

typedef unsigned int u32;
class BitFlag
{
public:
    BitFlag(u32 f) : flag(f) {}
    void Set(u32 f)
    {
        flag |= f;
    }
    void Reset(u32 f)
    {
        flag &= ~f;
    }
    u32 Get() const
    {
        return flag;
    }
private:
    u32 flag;
};

#endif