#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "ElementalPuddleSimpleSpawnData.generated.h"

class UElementalPuddleConfigurationData;
class AElementalPuddle;
class UElementalPuddleSpawnData;

UCLASS()
class OAKGAME_API UElementalPuddleSimpleSpawnData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AElementalPuddle> PuddleClass;
    
    UPROPERTY(EditAnywhere)
    UElementalPuddleConfigurationData* PuddleConfiguration;
    
    UPROPERTY(EditAnywhere)
    UElementalPuddleSpawnData* PuddleSpawnData;
    
    UPROPERTY(EditAnywhere)
    float AutoAlignTraceDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideFullSizeScale;
    
public:
    UElementalPuddleSimpleSpawnData();
};

