class Application
{
    void showError();

    bool initVulkan();
    bool createVulkanInstance();
public: //only the functions that need to be public are made public
    bool init();
    void run();
    void shutdown();
};