#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TestPolicy.h"
#include "TestPolicySimulation.generated.h"

class AActor;
class UWorld;

UCLASS()
class UTestPolicySimulation : public UTestPolicy {
    GENERATED_BODY()
public:
    UTestPolicySimulation();
    UFUNCTION(BlueprintCallable)
    void StopPlay();
    
    UFUNCTION(BlueprintCallable)
    void RunTestDrivers(const TArray<TSubclassOf<AActor>>& TestDrivers, float Timeout, float TimeLimit);
    
    UFUNCTION(BlueprintCallable)
    void PlayTestMap(const FString& MapName, const TArray<TSubclassOf<AActor>>& TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded);
    
    UFUNCTION(BlueprintCallable)
    void PlayMap(const FString& MapName, const TArray<TSubclassOf<AActor>>& TestDrivers, float Timeout, float TimeLimit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMapTraveled(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void IntendToMapTravel(bool WillMapTravel);
    
    UFUNCTION(BlueprintCallable)
    void AddTestDriver(const TSubclassOf<AActor> TestDriver);
    
};

