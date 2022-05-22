#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SirenStandInFlourish.generated.h"

class UGbxAction;
class AStandInAuxiliaryActor_Siren;
class UOakActionAbilityAugmentData;

USTRUCT(BlueprintType)
struct FSirenStandInFlourish {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UOakActionAbilityAugmentData>> SlotDatas;
    
    UPROPERTY(EditAnywhere)
    bool bHideCharacterDuringFlourish;
    
    UPROPERTY(EditAnywhere)
    bool bStartAuxiliaryActorHidden;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor_Siren> AuxiliaryActor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Animation;
    
    OAKGAME_API FSirenStandInFlourish();
};

