#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "LightProjectileAttachment.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FLightProjectileAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector_NetQuantize100 RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector_NetQuantizeNormal RelativeImpactNormal;
    
    GBXWEAPON_API FLightProjectileAttachment();
};

