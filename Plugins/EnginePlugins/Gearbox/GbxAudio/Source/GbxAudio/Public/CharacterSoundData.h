#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxTriggerProperty.h"
#include "InheritableSoundMap.h"
#include "InheritableVocalLoopList.h"
#include "CharacterSoundData.generated.h"

class UCharacterSoundData;

UCLASS(MinimalAPI)
class UCharacterSoundData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerRefreshAll;
    
    UPROPERTY(EditAnywhere)
    UCharacterSoundData* InheritData;
    
    UPROPERTY(EditAnywhere)
    FInheritableSoundMap Sounds;
    
    UPROPERTY(EditAnywhere)
    FInheritableVocalLoopList VocalLoops;
    
    UCharacterSoundData();
    UFUNCTION()
    void RefreshAll();
    
};

