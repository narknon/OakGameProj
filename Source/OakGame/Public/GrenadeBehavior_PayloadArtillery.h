#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadArtillery.generated.h"

class UDamageData;
class UStaticMesh;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadArtillery : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageData> ArtilleryDamageData;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusEffectChance;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusEffectDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float StatusEffectDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float ArtilleryRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float ArtilleryAdditionalDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float ArtilleryExplosionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float ArtilleryLastBounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float ArtilleryLastBounceBounciness;
    
    UPROPERTY(EditDefaultsOnly)
    float ArtilleryLastBounceFriction;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseCustomMeshOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float CustomMeshOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* CustomOffsetMesh;
    
public:
    UGrenadeBehavior_PayloadArtillery();
};

