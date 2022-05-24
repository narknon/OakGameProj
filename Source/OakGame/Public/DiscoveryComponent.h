#pragma once
#include "CoreMinimal.h"
#include "DiscoveredPlanetInfo.h"
#include "Components/ActorComponent.h"
#include "DiscoveredLevelInfo.h"
#include "FoundDiscoveryAreaDelegate.h"
#include "DiscoveryComponent.generated.h"

class UObject;
class UPlanetData;
class UDiscoveryAreaComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UDiscoveryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FDiscoveredLevelInfo> DiscoveredLevels;
    
    UPROPERTY(Transient)
    TArray<FDiscoveredPlanetInfo> DiscoveredPlanets;
    
    UPROPERTY(BlueprintAssignable)
    FFoundDiscoveryArea OnFoundDiscoveryArea;
    
    UPROPERTY(BlueprintAssignable)
    FFoundDiscoveryArea OnEnteredDiscoveryArea;
    
    UDiscoveryComponent();
    UFUNCTION(BlueprintCallable)
    static void UnlockPlanetForAllPlayers(UObject* WorldContextObject, UPlanetData* Planet);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerFirstDiscoveryOfArea(UDiscoveryAreaComponent* AreaComponent);
    
private:
    UFUNCTION()
    void OnHostDiscoveredPlanetsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlanetNew(UPlanetData* Planet);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlanetDiscovered(UPlanetData* Planet);
    
    UFUNCTION(BlueprintCallable)
    bool IsLevelDiscovered(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentLevelDiscovered();
    
    UFUNCTION(BlueprintCallable)
    bool IsAreaDiscovered(FName AreaName, bool CurrentLevelOnly);
    
    UFUNCTION()
    void FixupAreaDiscoveryAchievement();
    
    UFUNCTION(BlueprintCallable)
    static void DiscoverLevelForAllPlayers(UObject* WorldContextObject, FName LevelName, bool bAutoDiscoverPlanet);
    
    UFUNCTION(BlueprintCallable)
    static void DiscoverAreaForAllPlayers(UObject* WorldContextObject, FName AreaName);
    
    UFUNCTION(Client, Reliable)
    void ClientUnlockPlanet(UPlanetData* Planet);
    
    UFUNCTION(Client, Reliable)
    void ClientDiscoverLevel(FName LevelName);
    
};

