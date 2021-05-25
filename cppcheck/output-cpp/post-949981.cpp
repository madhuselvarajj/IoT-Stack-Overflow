#define RUN_EARLY(code) \
namespace { \
    class Init { \
        Init() { code; } \
    }; \
    Init init; \
}
