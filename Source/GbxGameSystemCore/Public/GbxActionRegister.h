#pragma once
#include "CoreMinimal.h"
#include "EActionRegisterType.h"
#include "UObject/NoExportTypes.h"
#include "GbxActionRegister.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxActionRegister {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    EActionRegisterType Type;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    UObject* ObjectValue;
    
    UPROPERTY()
    FName NameValue;
    
    UPROPERTY()
    FVector VecValue;
    
    FGbxActionRegister();
};

