class Init {
private:
    // Made the constructor private, so to avoid calling it in other situation
    // than for the initialization of the static member.
    Init() { initialize(); }

private:
    static Init INIT;
};


Init Init::INIT;
