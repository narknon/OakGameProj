#pragma once
#include "CoreMinimal.h"
#include "EASType.h"
#include "ASValue.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FASValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EASType::Type> ASType;
    
    UPROPERTY(BlueprintReadWrite)
    bool ASBoolean;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ASInt;
    
    UPROPERTY(BlueprintReadWrite)
    float AsNumber;
    
    UPROPERTY(BlueprintReadWrite)
    FString AsString;
    
    UPROPERTY(Transient)
    UGFxObject* AsObject;
    
    FASValue();
};

