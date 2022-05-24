#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "AudioPrepComponentFilter.generated.h"

class UPhysicalMaterial;
class UMaterialInterface;
class AActor;

USTRUCT(BlueprintType)
struct FAudioPrepComponentFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> AssetNameFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EPhysicalSurface>> SurfaceTypeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UPhysicalMaterial>> PhysMatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> MaterialName;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AActor*> WithinActorBoundsBlueprint;
    
    UPROPERTY(EditAnywhere)
    TArray<TLazyObjectPtr<AActor>> WithinActorBounds;
    
    UPROPERTY(EditAnywhere)
    TArray<TLazyObjectPtr<AActor>> AttachedToActors;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ActorClassName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ComponentClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyWorldGeometry;
    
    GBXAUDIO_API FAudioPrepComponentFilter();
};

