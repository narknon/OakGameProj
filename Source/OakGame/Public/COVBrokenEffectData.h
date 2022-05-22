#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectType.h"
#include "COVBrokenEffectData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FCOVBrokenEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
    UPROPERTY(EditAnywhere)
    FName HiddenBone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponEffectType> BreakEffectType;
    
    UPROPERTY(EditAnywhere)
    uint8 BreakEffectID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponEffectType> BrokenEffectType;
    
    UPROPERTY(EditAnywhere)
    uint8 BrokenEffectID;
    
    UPROPERTY(EditAnywhere)
    bool bHideAmpEffect;
    
    OAKGAME_API FCOVBrokenEffectData();
};

