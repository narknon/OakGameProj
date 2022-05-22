#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EDamageAreaOverlapFilterType.h"
#include "DamageAreaType.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew, Within=DamageData)
class GBXGAMESYSTEMCORE_API UDamageAreaType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxTargets;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMaxTargets: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDoDirectDamageToImpactedActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreWorldGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTryDirectTraceFirst: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSkipBackupImpactTrace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceZeroPitch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bZeroPitchBeforeApplyingHitStartOffset: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceZeroRoll: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    bool bTraceToGround;
    
    UPROPERTY(EditAnywhere)
    float TraceToGroundDownwardDistance;
    
    UPROPERTY(EditAnywhere)
    float TraceToGroundStartHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float TraceToGroundHitOffset;
    
    UPROPERTY(EditAnywhere)
    EDamageAreaOverlapFilterType OverlapFilter;
    
    UPROPERTY(EditAnywhere)
    FName OverlapProfileName;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> OverlapObjectTypes;
    
    UDamageAreaType();
};

