#pragma once
#include "CoreMinimal.h"
#include "PawnAttachmentQueryResult.generated.h"

class APawn;
class AActor;

USTRUCT(BlueprintType)
struct FPawnAttachmentQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadOnly)
    FName SlotName;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* AttachBase;
    
    GBXGAMESYSTEMCORE_API FPawnAttachmentQueryResult();
};

