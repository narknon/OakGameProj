#pragma once
#include "CoreMinimal.h"
#include "ChallengeDataType.generated.h"

class UEnum;

USTRUCT()
struct FChallengeDataType {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UEnum* ChallengeDataTypeEnum;
    
    UPROPERTY(EditAnywhere)
    uint8 ChallengeDataType;
    
    GBXGAMESYSTEMCORE_API FChallengeDataType();
};

