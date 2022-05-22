#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BeastmasterStandInPetData.generated.h"

class AStandInAuxiliaryActor_Pet;
class UOakPlayerCharacterAugmentData_Pet;
class UGbxAction_CoordinatedEffect;

USTRUCT(BlueprintType)
struct FBeastmasterStandInPetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakPlayerCharacterAugmentData_Pet> PetAugmentData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor_Pet> PetBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> CustomPetSpawnCE;
    
    UPROPERTY(EditAnywhere)
    float EnrageScale;
    
    UPROPERTY(EditAnywhere)
    FVector Translation;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    OAKGAME_API FBeastmasterStandInPetData();
};

