#pragma once
#include "CoreMinimal.h"
#include "GbxHUDWidget.h"
#include "EManagedWidgetType.h"
#include "ManagedWidget.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class UManagedWidget : public UGbxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FManagedWidgetAnimationComplete OnCompleteAnimation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetAnimation* IntroAnimation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetAnimation* IdleAnimation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetAnimation* ExitAnimation;
    
    UPROPERTY()
    EManagedWidgetType WidgetType;
    
    UManagedWidget();
};

