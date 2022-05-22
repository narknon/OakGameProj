#pragma once
#include "CoreMinimal.h"
#include "GFxDisplayNotificationWidgetTextFields.generated.h"

USTRUCT(BlueprintType)
struct FGFxDisplayNotificationWidgetTextFields {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString TextFieldPath;
    
    OAKGAME_API FGFxDisplayNotificationWidgetTextFields();
};

