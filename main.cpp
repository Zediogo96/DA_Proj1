
#include "include/Application.h"
#include "include/Starter.h"

using namespace std;

void test_scen2() {

    Application * app = Application::getInstance();
    app->loadData();

    app->testSortPackages(true);

    DeliveryMan tmp = app->getDeliveryMan()->at(0);

    vector<Package> auxVec = *app->getPackages();

    for (const auto& tmp2: *app->getPackages()) {
        cout << tmp2.getWeight() << " " << tmp2.getVolume() << endl;
    }

    app->scenery1();
}

int main() {

    // APP STARTER NORMAL
    Starter starter = Starter();
    starter.start();

    return 0;
}
