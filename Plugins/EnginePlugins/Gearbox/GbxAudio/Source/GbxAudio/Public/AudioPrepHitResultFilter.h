#pragma once
#include "CoreMinimal.h"
#include "AudioPropHitFilter_DirectionLimit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "AudioPrepHitResultFilter.generated.h"

class AActor;
class UPhysicalMaterial;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FAudioPrepHitResultFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> HitAssetNameFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> SurfaceTypeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UPhysicalMaterial>> PhysMatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialFilter;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AActor*> WithinActorBoundsBlueprint;
    
    UPROPERTY(EditAnywhere)
    TArray<TLazyObjectPtr<AActor>> WithinActorBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAudioPropHitFilter_DirectionLimit> NormalDirectionLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowHitsWithinGeometry;
    
    GBXAUDIO_API FAudioPrepHitResultFilter();
};

