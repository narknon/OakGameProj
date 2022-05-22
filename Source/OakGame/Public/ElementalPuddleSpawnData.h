#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ElementalPuddleSpawnData.generated.h"

UCLASS()
class OAKGAME_API UElementalPuddleSpawnData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpawnTransitionTime;
    
    UPROPERTY(EditAnywhere)
    float InitialOpacity;
    
    UPROPERTY(EditAnywhere)
    float InitialScale;
    
    UPROPERTY(EditAnywhere)
    float FullSizeOpacity;
    
    UPROPERTY(EditAnywhere)
    float FullSizeScale;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    float CleanUpTransitionTime;
    
    UPROPERTY(EditAnywhere)
    float CleanUpOpacity;
    
    UPROPERTY(EditAnywhere)
    float CleanUpScale;
    
    UPROPERTY(EditAnywhere)
    float GroundingDecalCleanUpDelay;
    
public:
    UElementalPuddleSpawnData();
};

