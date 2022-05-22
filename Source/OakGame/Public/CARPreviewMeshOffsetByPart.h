#pragma once
#include "CoreMinimal.h"
#include "ECARPartType.h"
#include "UObject/NoExportTypes.h"
#include "CARPreviewMeshOffsetByPart.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FCARPreviewMeshOffsetByPart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECARPartType Type;
    
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
    FCARPreviewMeshOffsetByPart();
};

