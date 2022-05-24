#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "LingeringDamageTypeInfo.h"
#include "GrenadeBehavior_PayloadLingering.generated.h"

class UStaticMesh;
class UGbxDamageType;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadLingering : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UGbxDamageType>, FLingeringDamageTypeInfo> LingeringDamageTypeAssociations;
    
    UPROPERTY(EditDefaultsOnly)
    float LingeringBurstDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float LingeringBurstDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float FinalExplosionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvChildFinalExplosionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float RainChildFinalExplosionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float LingeringBounceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LingeringNumBounces;
    
    UPROPERTY(EditDefaultsOnly)
    float LingeringBounciness;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseCustomMeshOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float CustomMeshOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* CustomOffsetMesh;
    
public:
    UGrenadeBehavior_PayloadLingering();
};

