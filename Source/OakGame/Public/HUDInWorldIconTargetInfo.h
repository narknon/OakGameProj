#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HUDInWorldIconTargetInfo.generated.h"

class AActor;
class UInWorldIconData;
class USceneComponent;

USTRUCT(BlueprintType)
struct FHUDInWorldIconTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UInWorldIconData* IconData;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* LocationComponent;
    
    UPROPERTY(BlueprintReadWrite)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid Guid;
    
    OAKGAME_API FHUDInWorldIconTargetInfo();
};

