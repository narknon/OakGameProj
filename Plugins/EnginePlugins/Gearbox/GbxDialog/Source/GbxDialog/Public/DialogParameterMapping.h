#pragma once
#include "CoreMinimal.h"
#include "EDialogParameterMappingSourceType.h"
#include "DialogParameterMapping.generated.h"

class UDialogParameter;
class UObject;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogParameterMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogParameter* TargetParameter;
    
    UPROPERTY(EditAnywhere)
    EDialogParameterMappingSourceType SourceType;
    
    UPROPERTY(EditAnywhere)
    UObject* SourceObject;
    
    UPROPERTY(EditAnywhere)
    UObject* SourceObjectSubContext;
    
    UPROPERTY(EditAnywhere)
    float SourceNumber;
    
    FDialogParameterMapping();
};

