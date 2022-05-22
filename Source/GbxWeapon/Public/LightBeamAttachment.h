#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LightBeamAttachment.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FLightBeamAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector_NetQuantize100 LocationOffset;
    
    GBXWEAPON_API FLightBeamAttachment();
};

