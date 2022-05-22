#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"
#include "UserStateEnumValue.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUserStateEnumValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSimpleMemberReference StateProperty;
    
    UPROPERTY(EditAnywhere, Transient)
    FName PropertyName;
    
    UPROPERTY(VisibleAnywhere)
    UEnum* Enum;
    
    UPROPERTY(EditAnywhere)
    uint8 EnumValue;
    
    FUserStateEnumValue();
};

