#include "TestPolicySimulation.h"
#include "Templates/SubclassOf.h"

class AActor;

void UTestPolicySimulation::StopPlay() {
}

void UTestPolicySimulation::RunTestDrivers(const TArray<TSubclassOf<AActor>>& TestDrivers, float Timeout, float TimeLimit) {
}

void UTestPolicySimulation::PlayTestMap(const FString& MapName, const TArray<TSubclassOf<AActor>>& TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded) {
}

void UTestPolicySimulation::PlayMap(const FString& MapName, const TArray<TSubclassOf<AActor>>& TestDrivers, float Timeout, float TimeLimit) {
}


void UTestPolicySimulation::IntendToMapTravel(bool WillMapTravel) {
}

void UTestPolicySimulation::AddTestDriver(const TSubclassOf<AActor> TestDriver) {
}

UTestPolicySimulation::UTestPolicySimulation() {
}

