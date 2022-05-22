#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomizationStreamingEntry.h"
#include "GbxCustomizationManager.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API AGbxCustomizationManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FCustomizationStreamingEntry> CustomizationStreamingEntries;
    
public:
    AGbxCustomizationManager();
    UFUNCTION()
    void OnCustomizationAssetLoaded();
    
};

