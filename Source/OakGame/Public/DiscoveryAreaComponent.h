#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAreaComponent.h"
#include "AttributeInitializationData.h"
#include "DiscoveryAreaComponent.generated.h"

class UChallenge;
class UWwiseEvent;
class UGbxUIName;
class URegionData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UDiscoveryAreaComponent : public UGbxAreaComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FName DefaultWorldAreaShortName;
    
public:
    UPROPERTY(EditAnywhere)
    FText WorldAreaDisplayName;
    
    UPROPERTY(EditAnywhere)
    UGbxUIName* WorldAreaDisplayUIName;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DiscoverySoundEvent;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UChallenge> DiscoveryChallenge;
    
    UPROPERTY(EditAnywhere)
    URegionData* BalanceToRegionDef;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ExperienceRewardMultiplier;
    
    UDiscoveryAreaComponent();
};

