// #include "os.h"  // non-define, no used

#define SPIN_LOCK_OFF 0
#define SPIN_LOCK_ON 1

struct spin_lock_t
{
    int falg;
};

int spin_lock(struct spin_lock_t* lk)
{
    while(__sync_lock_test_and_set(&lk->flag, SPIN_LOCK_ON) != SPIN_LOCK_OFF);
}

int spin_unlock(struct spin_lock_t* lk)
{
    lk->falg = SPIN_LOCK_OFF;
}

int spin_lock_init(struct spin_lock_t* lk)
{
    lk->falg = SPIN_LOCK_OFF;
}

