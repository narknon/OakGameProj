#pragma once
#include "CoreMinimal.h"
#include "StretchAnimData.generated.h"

class AActor;
class UAnimSequence;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStretchAnimData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AActor* Actor;
    
    UPROPERTY(Transient)
    UAnimSequence* AnimSeq;
    
public:
    FStretchAnimData();
};

