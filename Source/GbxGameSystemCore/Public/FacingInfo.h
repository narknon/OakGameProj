#pragma once
#include "CoreMinimal.h"
#include "EFacingInfoType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FacingInfo.generated.h"

class USceneComponent;
class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FFacingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EFacingInfoType Type;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Vector;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotator;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Offset;
    
    FFacingInfo();
};

