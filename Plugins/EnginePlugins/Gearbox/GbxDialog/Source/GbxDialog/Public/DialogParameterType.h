#pragma once
#include "CoreMinimal.h"
#include "EDialogParameterPrimaryType.h"
#include "DialogParameterType.generated.h"

class UDialogEnumType;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogParameterType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDialogParameterPrimaryType PrimaryType;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumType* SecondaryType;
    
    FDialogParameterType();
};

